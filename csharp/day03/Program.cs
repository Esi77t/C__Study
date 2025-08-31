using Character;
using System;
using Item;
using Inventory;

class Program
{
    static void Main(string[] args)
    {
        // 예제 1
        Player player = new Player("주인공", 100, 80, 129);
        Enemy enemy = new Enemy("괴물곰", 60, 30, 23);

        player.Heal();
        enemy.Roar();

        Console.WriteLine($"{player.GetName()} HP : {player.GetCurrentHP()}/{player.GetMaxHP()}\n");


        // 예제 2
        ItemData item1 = new ItemData("롱소드", ItemType.Weapon);
        ItemData item2 = new ItemData("플레이트 아머", ItemType.Armor);
        ItemData item3 = new ItemData("붉은 포션", ItemType.Potion);

        PlayerInventory MyInventory = new PlayerInventory();

        MyInventory.AddItem(item1);
        MyInventory.AddItem(item2);
        MyInventory.AddItem(item3);
        MyInventory.PrintInventory();

        Console.WriteLine();
        MyInventory.RemoveItem(item2);
        MyInventory.PrintInventory();
    }
}