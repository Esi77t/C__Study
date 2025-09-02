using Character;
using System;
using Item;
using Inventory;

class Program
{
    static void Main(string[] args)
    {

        Player player = new Player("주인공", 80, 30, 129);
        Enemy enemy = new Enemy("괴물곰", 40, 30, 210, 25);

        PotionData smallPotion = new PotionData("작은 포션", ItemType.Potion, 30);
        PotionData largePotion = new PotionData("큰 포션", ItemType.Potion, 150);

        player.MyInventory.AddItem(smallPotion);
        player.MyInventory.AddItem(smallPotion);
        player.MyInventory.AddItem(largePotion);

        while (player.GetCurrentHP() > 0 && enemy.GetCurrentHP() > 0)
        {

            bool isPlayerTurn = false;
            while (!isPlayerTurn)
            {
                Console.WriteLine("\n행동을 선택하세요\n");
                Console.WriteLine("\n(1) 공격 | (2) 포션 회복 | (3) 힐 회복\n");
                string selected = Console.ReadLine();

                switch (selected)
                {
                    case "1":
                        Console.WriteLine($"\n{player.GetName()}(이)가 {enemy.GetName()}에게 공격합니다.\n");
                        player.Attack(enemy);
                        Console.WriteLine($"{enemy.GetName()} HP : {enemy.GetCurrentHP()}/{enemy.GetMaxHP()}\n");
                        isPlayerTurn = true;
                        break;
                    case "2":
                        Console.WriteLine($"\n{player.GetName()}(이)가 인벤토리를 확인합니다...\n");
                        player.UsePotion();
                        isPlayerTurn = true;
                        break;
                    case "3":
                        Console.WriteLine($"\n{player.GetName()}(이)가 회복합니다..\n");
                        player.Heal();
                        Console.WriteLine($"{player.GetName()} HP : {player.GetCurrentHP()}/{player.GetMaxHP()}\n");
                        isPlayerTurn = true;
                        break;
                    default:
                        Console.WriteLine($"\n다시 입력해주세요.\n");
                        break;
                }
            }

            if (enemy.GetCurrentHP() <= 0)
            {
                break;
            }

            Console.WriteLine($"\n{enemy.GetName()}(이)가 {player.GetName()}에게 공격합니다.\n");
            enemy.Attack(player);

            Console.WriteLine($"{player.GetName()} HP : {player.GetCurrentHP()}/{player.GetMaxHP()}\n");
        }

        Console.WriteLine("\n---전투 종료---\n");
        if (player.GetCurrentHP() > 0)
        {
            Console.WriteLine("\n전투 승리!\n");

            player.AddXP(enemy.XPValue);
        }
        else
        {
            Console.WriteLine("\nGame Over\n");
        }
    }
}