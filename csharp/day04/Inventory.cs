using System;
using System.Collections.Generic;
using Item;

namespace Inventory
{
    class PlayerInventory
    {
        private List<ItemData> items = new List<ItemData>();

        public void AddItem(ItemData item)
        {
            items.Add(item);
        }

        public void RemoveItem(ItemData item)
        {
            items.Remove(item);
        }

        public void PrintInventory()
        {

            if (items.Count == 0)
            {
                Console.WriteLine("인벤토리가 비어있습니다.");
                return;
            }

            foreach (var item in items)
            {
                Console.WriteLine($"아이템 이름 : {item.Name}, 타입 : {item.Type}");
            }
        }
    }
}