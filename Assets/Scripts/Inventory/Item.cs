using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item
{
   public enum ItemType
    {
        Coins,
        QuestItem
    }

    public int id;
    public string title;
    public string description;
    public ItemType itemType;
    public int amount;
    public Sprite icon;

    public Item(int id, string title, string description, ItemType itemType, int amount)
    {

        this.id = id;
        this.title = title;
        this.description = description;
        this.itemType = itemType;
        this.icon = Resources.Load<Sprite>("Sprites/Items/" + title);
        this.amount = amount;
    }

    public Item(Item item)
    {
        this.id = item.id;
        this.title = item.title;
        this.description = item.description;
        this.itemType = item.itemType;
        this.amount = item.amount;
        this.icon = Resources.Load<Sprite>("Sprites/Items/" + item.title);
    }

    public void AddAmount(int amount) {
        this.amount += amount;
    }
}
