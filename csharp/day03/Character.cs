namespace Character
{
    class Character
    {

        protected string Name;
        protected int Attack;
        protected int Defense;
        protected int MaxHP;
        protected int CurrentHP;
        
        public string GetName() { return Name; }
        public int GetCurrentHP() { return CurrentHP; }
        public int GetMaxHP() { return MaxHP; }

        public Character(string name, int attack, int defense, int maxHP)
        {
            Name = name;
            Attack = attack;
            Defense = defense;
            MaxHP = maxHP;
            CurrentHP = maxHP;      // 초기값 HP는 당연히 최대값으로
        }
    }

    class Player : Character
    {
        public Player(string name, int attack, int defense, int maxHP) : base(name, attack, defense, maxHP)
        {

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
    }

    class Enemy : Character
    {
        public Enemy(string name, int attack, int defense, int maxHP) : base(name, attack, defense, maxHP)
        {

        }

        public void Roar()
        {
            Console.WriteLine($"\n{Name}이 울부짖었습니다!");
        }
    }
}