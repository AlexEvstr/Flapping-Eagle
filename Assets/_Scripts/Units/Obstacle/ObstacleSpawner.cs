using System.Collections;
using UnityEngine;

namespace evstr
{
    public class ObstacleSpawner : MonoBehaviour
    {
        private float _coordinateX = 21.0f;
        private float _coordinateY;
        private float _topLimit = -4.0f;
        private float _botLimit = -7.0f;
        private Vector2 _spawnPosition;

        public void StartSpawn()
        {
            _spawnPosition = new Vector2();
            ObjectPool.Instance.InitPool();
            StartCoroutine(Spawner());
        }

        private IEnumerator Spawner()
        {
            while (true)
            {
                yield return new WaitForSeconds(1);
                _coordinateY = Random.Range(_topLimit, _botLimit);
                GameObject obstacle = ObjectPool.Instance.GetPooledObject();
                if (obstacle != null)
                {
                    _spawnPosition.x = _coordinateX;
                    _spawnPosition.y = _coordinateY;
                    obstacle.transform.position = _spawnPosition;
                    obstacle.SetActive(true);
                }
               
            }
        }
    }

}