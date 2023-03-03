using System.Collections;
using UnityEngine;

namespace evstr.Audio
{
    public class AudioService : MonoBehaviour
    {
        private AudioSource _audioSource;

        [SerializeField] private AudioSource _flapSource;
        [SerializeField] private AudioSource _collisionSource;

        private void Start()
        {
            _audioSource = GetComponent<AudioSource>();
        }

        public void PlayFlapSound()
        {
            _flapSource.Play();
        }

        public void PlayCollisionSound()
        {
            _collisionSource.Play();
        }           
    }
}
