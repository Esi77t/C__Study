namespace Item
{
    public class ItemData
    {
        public string Name { get; private set; }
        public ItemType Type { get; private set; }      // Type을 ItemType으로 선언

        public ItemData(string name, ItemType type)
        {
            Name = name;
            Type = type;
        }
    }

    public class PotionData : ItemData
    {
        public int HealAmount { get; private set; }

        public PotionData(string name, ItemType type, int healAmount) : base(name, type)
        {
            HealAmount = healAmount;
        }
    }

    public class EquipmentData : ItemData
    {
        public int AttackBonus {  get; private set; }
        public int DefenseBonus { get; private set; }
        public EquipmentData(string name, ItemType type, int attackBonus, int defenseBonus) : base(name, type)
        {
            AttackBonus = attackBonus;
            DefenseBonus = defenseBonus;
        }
    }

    public enum ItemType
    {
        Weapon,
        Armor,
        Potion,
    }
}

