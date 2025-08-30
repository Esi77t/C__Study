using System;

class Program
{
    static void Main(string[] args)
    {
        Character Player = new Character("주인공", 100, 50);
        Character Enemy = new Character("몬스터", 80, 30);

        Console.WriteLine("플레이어 정보\n");
        Player.PrintInfo();

        Console.WriteLine("\n적 정보\n");
        Enemy.PrintInfo();

        int damageToEnemy = Player.GetTotalDamage(Enemy.Defense);
        Console.WriteLine($"{Player.Name}이 {Enemy.Name}에게 입힌 피해량 : {damageToEnemy}\n");

        int damageToPlayer = Enemy.GetTotalDamage(Player.Defense);
        Console.WriteLine($"\n{Enemy.Name}이 {Player.Name}에게 입힌 피해량 : {damageToPlayer}\n");
    }
}