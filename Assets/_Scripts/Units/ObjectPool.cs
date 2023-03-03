using System.Collections.Generic;
using UnityEngine;
using Zenject;
using evstr.Generals;
using evstr.Obstacle;
using evstr.GameConfig;
using evstr.States;
using evstr.Audio;

public class ObjectPool : MonoBehaviour
{
    private ResourceController _resourceController;
    private int _amountToPool = 5;

    private List<GameObject> _pooledObjects;
    private GameObject _objectToPool;

    private IUpdateLoop _updater;
    private StateMachine _stateMachine;
    private IGameData _gameData;
    private AudioService _audioService;

    public static ObjectPool Instance;

    [Inject]
    private void Construct(IUpdateLoop update, StateMachine stateMachine, IGameData gameData, ResourceController resourceController, AudioService audioService)
    {
        _updater = update;
        _stateMachine = stateMachine;
        _gameData = gameData;
        _resourceController = resourceController;
        _audioService = audioService;
    }

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            return;

        _pooledObjects = new List<GameObject>();
    }

    public void InitPool()
    {
        _objectToPool = _resourceController.GetObstaclePrefab();
        for (int i = 0; i < _amountToPool; i++)
        {
            var obj = Create();
            _pooledObjects.Add(obj);
        }
    }

    public GameObject GetPooledObject()
    {
        for (int i = 0; i < _pooledObjects.Count; i++)
        {
            if (!_pooledObjects[i].activeInHierarchy)
            {
                return _pooledObjects[i];
            }
        }
        var obj = Create();
        _pooledObjects.Add(obj);
        return obj;
    }

    private GameObject Create()
    {
        var obj = Object.Instantiate(_objectToPool);
        obj.GetComponent<ObstacleMovement>().Construct(_updater, _stateMachine, _gameData, _audioService);
        obj.SetActive(false);
        return obj;
    }
}