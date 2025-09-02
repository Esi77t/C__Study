using System;
using System.Collections.Generic;
using Item;

namespace Inventory
{
    class PlayerInventory
    {
        public List<ItemData> Items { get; private set; } = new List<ItemData>();

        public void AddItem(ItemData item)
        {
            Items.Add(item);
        }

        public void RemoveItem(ItemData item)
        {
            Items.Remove(item);
        }

        public void PrintInventory()
        {

            if (Items.Count == 0)
            {
                Console.WriteLine("인벤토리가 비어있습니다.");
                return;
            }

            foreach (var item in Items)
            {
                Console.WriteLine($"아이템 이름 : {item.Name}, 타입 : {item.Type}");
            }
        }
    }
}