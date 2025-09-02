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
            int calculatedDamage = this.AttackPower - target.Defense;

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
        public Player(string name, int attack, int defense, int maxHP) : base(name, attack, defense, maxHP)
        {
            MyInventory = new PlayerInventory();
        }

        public void AddXP(int xp)
        {
            Console.WriteLine($"\n{Name}이(가) {xp}를 획득했습니다");
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

        public void Heal()
        {
            int thirtyPercentHP = (int)(MaxHP * 0.3);

            CurrentHP += thirtyPercentHP;

            if (CurrentHP > MaxHP)
            {
                CurrentHP = MaxHP;
            }
        }

        public PlayerInventory MyInventory { get; private set; }

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
    }

    class Enemy : Character
    {
        public Enemy(string name, int attack, int defense, int maxHP, int xpValue) : base(name, attack, defense, maxHP)
        {
            XPValue = xpValue;
        }

        public int XPValue { get; private set; }

        public void Roar()
        {
            Console.WriteLine($"\n{Name}이 울부짖었습니다!");
        }
    }
}