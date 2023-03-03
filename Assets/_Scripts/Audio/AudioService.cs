using evstr.GameConfig;
using System.Collections;
using UnityEngine;
using Zenject;

namespace evstr.Audio
{
    public class AudioService : MonoBehaviour
    {
        private AudioSource _audioSource;
        private IGameData _gameData;

        [SerializeField] private AudioSource _flapSource;
        [SerializeField] private AudioSource _collisionSource;

        [Inject]
        private void Construct(IGameData gameData)
        {
            _gameData = gameData;
        }

        private void Start()
        {
            _audioSource = GetComponent<AudioSource>();

            if (_gameData.AudioStatus)
                AudioListener.volume = 1;
            else
                AudioListener.volume = 0;
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
