using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Inventory : MonoBehaviour { 

    private Dictionary<Item,int> userItems = new Dictionary<Item, int>();
    public ItemDatabase itemDatabase;
    public UIInventory inventoryUI;

    private void Start()
    {
        AddItem(0);
        AddAmountToItem(0, 3);
    }

    public void AddItem(int id)
    {
        Item itemToAdd = itemDatabase.GetItemById(id);
        userItems.Add(itemToAdd,userItems.Count());
        inventoryUI.AddItem(itemToAdd);
        Debug.Log("Added item: "+ itemToAdd.title);
    }

    public void AddItem(string title)
    {
        Item itemToAdd = itemDatabase.GetItemByTitle(title);
        userItems.Add(itemToAdd, userItems.Count());
        inventoryUI.AddItem(itemToAdd);
        Debug.Log("Added item: " + itemToAdd.title);
    }

    public void AddAmountToItem(int id, int amount)
    {
        Item itemToChange = CheckItem(id);
        itemToChange.AddAmount(amount);

        //remove from dict if item exists
        if (itemToChange != null)
        {
            userItems.Remove(itemToChange);
            userItems.Add(itemToChange, userItems.Count());
            inventoryUI.UpdateChangedSlot(itemToChange);
        }
        else
        {
            userItems.Add(itemToChange, userItems.Count());
            inventoryUI.AddItem(itemToChange);
        }
    }

    public Item CheckItem(int id)
    {
        Item item = itemDatabase.GetItemById(id);
        if(userItems.ContainsKey(item))
        {
            return item;
        }
        return null;
    }

    public void RemoveItem(int id)
    {
        Item itemToRemove = CheckItem(id);
        if(itemToRemove != null)
        {
            userItems.Remove(itemToRemove);
            inventoryUI.RemoveItem(itemToRemove);
            Debug.Log("Removed item: " + itemToRemove.title);
        }
    }

}
