using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace evstr
{
    public class DisableZone : MonoBehaviour
    {
        private void OnCollisionEnter2D(Collision2D collision)
        {
            collision.gameObject.SetActive(false);
        }
    }
}
