using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIItem : MonoBehaviour
{
    public Item item;
    public TextMeshProUGUI amountText;
    private Image sprite;
    // Start is called before the first frame update
    private void Awake()
    {
        sprite = GetComponent<Image>();
        UpdateItem(null);
    }

    // Update is called once per frame
    public void UpdateItem(Item item)
    {
        this.item = item;
        if(this.item != null)
        {
            sprite.color = Color.white;
            sprite.sprite = this.item.icon;
            if(this.item.amount > 1) 
            {
                amountText.text = this.item.amount.ToString();
            }
            else
            {
                amountText.text = "";
            }

        }else
        {
            sprite.color = Color.clear;
        }
    }
}
