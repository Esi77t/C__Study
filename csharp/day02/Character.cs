public class Character
{
    // private string Name;
    // private int Attack;
    // private int Defense;

    public string Name { get; set; }
    public int Attack { get; set; }
    public int Defense { get; set; }

    public Character(string name, int attack, int defense)
    {
        Name = name;
        Attack = attack;
        Defense = defense;
    }

    public int GetTotalDamage(int targetDefense)
    {
        return Math.Max(0, Attack - targetDefense);
    }

    public void PrintInfo()
    {
        Console.WriteLine($"캐릭터 이름 : {Name}\n공격력 : {Attack}\n방어력 : {Defense}");
    }
}