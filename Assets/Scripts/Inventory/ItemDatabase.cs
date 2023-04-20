using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemDatabase : MonoBehaviour
{
    public List<Item> items = new List<Item>();

    private void Awake()
    {
        BuildDatabase();
    }

    public Item GetItemById(int id)
    {
        return items.Find(item => item.id == id);
    }

    public Item GetItemByTitle(string title)
    {
        return items.Find(item =>item.title == title);
    }

    void BuildDatabase()
    {
        items = new List<Item>(){ 
                new Item(0, "Coin", "Your shiny reward", Item.ItemType.Coins, 1),
                new Item(1, "Diamond Sword", "A sword made with diamond", Item.ItemType.QuestItem, 1)
                };
    }
    
}
