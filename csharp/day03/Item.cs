namespace Item
{
    class ItemData
    {
        public string Name { get; private set; }
        public ItemType Type { get; private set; }      // Type을 ItemType으로 선언

        public ItemData(string name, ItemType type)
        {
            Name = name;
            Type = type;
        }
    }

    enum ItemType
    {
        Weapon,
        Armor,
        Potion,
    }
}

