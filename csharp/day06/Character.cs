using Inventory;
using Item;

namespace Character
{
    class Character
    {

        protected string Name;
        protected int AttackPower;
        protected int Defense;
        protected int MaxHP;
        protected int CurrentHP;
        protected int Level = 1;
        protected int CurrentXP = 0;
        protected int MaxXP = 10;

        public string GetName() { return Name; }
        public int GetCurrentHP() { return CurrentHP; }
        public int GetMaxHP() { return MaxHP; }
        public int GetLevel() { return Level; }
        public int GetCurrentXP() { return CurrentXP; }
        public int GetMaxXP() { return MaxXP; }

        // virtual
        // 이 키워드는 하위 클래스가 이 메서드를 가지고 오버라이드(재정의) 할 수 있게 해줌
        // virtual 메서드는 실제 코드를 가지고 있다.
        public virtual int GetAttackPower() { return AttackPower; }
        public virtual int GetDefense() { return Defense; }



        public Character(string name, int attack, int defense, int maxHP)
        {
            Name = name;
            AttackPower = attack;
            Defense = defense;
            MaxHP = maxHP;
            CurrentHP = maxHP;      // 초기값 HP는 당연히 최대값으로
        }

        public void Attack(Character target)
        {
            int calculatedDamage = this.GetAttackPower() - target.GetDefense();

            if (calculatedDamage < 0)
            {
                calculatedDamage = 0;
            }

            target.TakeDamage(calculatedDamage);
        }

        public void TakeDamage(int damage)
        {
            
            CurrentHP -= damage;

            if (CurrentHP < 0)
            {
                CurrentHP = 0;
            }
        }
    }

    class Player : Character
    {

        public override int GetAttackPower() 
        {
            int finalAttackPower = AttackPower;

            if(MyWeapon != null)
            {
                finalAttackPower += MyWeapon.AttackBonus;
            }

            return finalAttackPower;
        }

        public override int GetDefense() 
        {
            int finalDefense = Defense;

            if(MyArmor != null)
            {
                finalDefense += MyArmor.DefenseBonus;
            }

            return finalDefense;
        }

        public Player(string name, int attack, int defense, int maxHP) : base(name, attack, defense, maxHP)
        {
            MyInventory = new PlayerInventory();
        }

        // 경험치 추가
        public void AddXP(int xp)
        {
            Console.WriteLine($"\n{Name}이(가) 경험치 {xp}를 획득했습니다");
            CurrentXP += xp;

            while (CurrentXP >= MaxXP)
            {
                Console.WriteLine($"\n{Name}이(가) 레벨이 올랐습니다!");
                Level++;
                CurrentXP = CurrentXP - MaxXP;
                MaxXP = (int)(MaxXP + (MaxXP * 1.2));

                AttackPower += 5;
                Defense += 3;
                MaxHP += 10;

                CurrentHP = MaxHP;

                Console.WriteLine($"레벨 {Level}(이)가 되었습니다.");
                Console.WriteLine($"공격력이 {AttackPower}로 올랐습니다.");
                Console.WriteLine($"방어력이 {Defense}로 올랐습니다.");
                Console.WriteLine($"HP가 {MaxHP}로 올랐습니다.");
            }
        }

        // 회복
        public void Heal()
        {
            int thirtyPercentHP = (int)(MaxHP * 0.3);

            CurrentHP += thirtyPercentHP;

            if (CurrentHP > MaxHP)
            {
                CurrentHP = MaxHP;
            }
        }

        // 인벤토리
        public PlayerInventory MyInventory { get; private set; }

        // 인벤토리 내부 포션사용
        public void UsePotion()
        {
            var potion = MyInventory.Items.FirstOrDefault(item => item.Type == Item.ItemType.Potion);

            if (potion != null)
            {
                PotionData potionData = potion as PotionData;

                CurrentHP += potionData.HealAmount;

                if (CurrentHP > MaxHP) 
                {
                    CurrentHP = MaxHP;
                }

                MyInventory.Items.Remove(potionData);

                Console.WriteLine($"{potionData.Name}을 사용하여 {potionData.HealAmount} 회복했습니다.\n");
                Console.WriteLine($"{Name}의 남은 HP : {CurrentHP}/{MaxHP}\n");
            } else
            {
                Console.WriteLine("인벤토리에 포션이 없습니다.");
            }
        }

        // 장비 종류
        public EquipmentData MyWeapon { get; private set; }
        public EquipmentData MyArmor { get; private set; }

        public void Equip(EquipmentData equipment)
        {
            switch (equipment.Type)
            {
                case ItemType.Weapon:
                    MyWeapon = equipment;
                    Console.WriteLine($"{equipment.Name}을(를) 무기로 장착했습니다.");
                    break;
                case ItemType.Armor:
                    MyArmor = equipment;
                    Console.WriteLine($"{equipment.Name}을(를) 방어구로 장착했습니다.");
                    break;
            }
        }
    }

    class Enemy : Character
    {
        public Enemy(string name, int baseAttack, int baseDefense, int maxHP, int xpValue, int playerLevel) : base(name, baseAttack, baseDefense, maxHP)
        {
            XPValue = xpValue;

            for (int i = 0; i < playerLevel - 1; i++)
            {
                AttackPower = (int)(AttackPower * 1.05);
                Defense = (int)(Defense * 1.05);
                MaxHP = (int)(MaxHP * 1.05);
            }

            CurrentHP = MaxHP;
        }

        public int XPValue { get; private set; }

        public void Roar()
        {
            Console.WriteLine($"\n{Name}이 울부짖었습니다!");
        }
    }

    class Goblin : Enemy
    {
        public Goblin(int playerLevel) : base("고블린", 50, 25, 150, 40, playerLevel)
        {

        }
    }

    class Orc : Enemy
    {
        public Orc(int playerLevel) : base("오크", 50, 25, 150, 40, playerLevel)
        {

        }
    }
}