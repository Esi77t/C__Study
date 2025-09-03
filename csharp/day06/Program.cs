using Character;
using System;
using Item;
using Inventory;

class Program
{
    static void Main(string[] args)
    {
        Random rand = new Random();
        Player player = new Player("주인공", 80, 30, 129);

        List<Enemy> enemies = new List<Enemy>
        {
            new Enemy("괴물곰", 40, 30, 210, 25, player.GetLevel()),
            new Goblin(player.GetLevel()),
            new Orc(player.GetLevel())
        };

        while (true)
        {
            Enemy enemy = enemies[rand.Next(enemies.Count)];

            Console.WriteLine($"\n=========================================");
            Console.WriteLine($"새로운 적 [{enemy.GetName()}]이(가) 나타났습니다!");
            Console.WriteLine($"=========================================\n");

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

                Console.WriteLine("다음 라운드를 시작하시겠습니까?");
                Console.WriteLine("(1) 계속 진행 | (2) 게임 종료");
                string choice = Console.ReadLine();

                if (choice == "2")
                {
                    Console.WriteLine("게임을 종료합니다.");
                    break;
                }
            }
            else
            {
                Console.WriteLine("\nGame Over\n");
                break;
            }
        }
        
    }
}