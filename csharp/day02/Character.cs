public class Character
{
    // private string Name;
    // private int Attack;
    // private int Defense;

    // 자동 구현 속성
    // get과 set을 따로 작성하지 않고 변수처럼 간단하게 선언하는 문법
    // 동작 원리
    // 1. 내부적으로 해당 속성을 저장하고 반환하는 필드 생성
    // 2. 필드 이름은 자동으로 생성되며 외부에서 직접 액세스 불가
    // 3. 컴파일러가 필드를 처리하므로 get 및 set 접근자를 통해 값을 읽고 저장 
    public string Name { get; private set; }
    public int Attack { get; private set; }
    public int Defense { get; private set; }

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