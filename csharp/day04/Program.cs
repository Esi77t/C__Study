using Character;
using System;
using Item;
using Inventory;

class Program
{
    static void Main(string[] args)
    {

        Player player = new Player("주인공", 80, 80, 129);
        Enemy enemy = new Enemy("괴물곰", 40, 30, 210);

        while (player.GetCurrentHP() > 0 && enemy.GetCurrentHP() > 0)
        {
            Console.WriteLine($"\n{player.GetName()}(이)가 {enemy.GetName()}에게 공격합니다.\n");
            player.Attack(enemy);

            if (enemy.GetCurrentHP() <= 0)
            {
                break;
            }

            Console.WriteLine($"{enemy.GetName()} HP : {enemy.GetCurrentHP()}/{enemy.GetMaxHP()}\n");

            Console.WriteLine($"\n{enemy.GetName()}(이)가 {player.GetName()}에게 공격합니다.\n");
            enemy.Attack(player);

            Console.WriteLine($"{player.GetName()} HP : {player.GetCurrentHP()}/{player.GetMaxHP()}\n");
        }

        Console.WriteLine("\n---전투 종료---\n");
        if (player.GetCurrentHP() > 0)
        {
            Console.WriteLine("\n전투 승리!\n");
        }
        else
        {
            Console.WriteLine("\nGame Over\n");
        }
    }
}

// 내일 할것
// Console.ReadLine(); 이게 입력받는 것
// Java에서 Scanner 역할을 한다고 함
// 그리고 공격력하고 방어력 계산해서 로직 수정