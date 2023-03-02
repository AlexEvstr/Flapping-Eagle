using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using Unity.VisualScripting;
using UnityEngine;

namespace evstr.GameConfig
{
    public static class SaveLoadData
    {
        public static string SavePath;

        static SaveLoadData()
        {
            SavePath = Application.persistentDataPath + "gamedata.dat";
        }

        public static void Save(GameData gameData)
        {
            BinaryFormatter formatter = new BinaryFormatter();
            using (FileStream fileStream = new FileStream(SavePath, FileMode.OpenOrCreate))
            {
                formatter.Serialize(fileStream, gameData);
            }
        }

        public static GameData Load()
        {
            if (!IsLoad())
                return new GameData();

            BinaryFormatter formatter = new BinaryFormatter();
            GameData gameData = null;

            using (FileStream fileStream = new FileStream(SavePath, FileMode.Open))
            {
                gameData = (GameData)formatter.Deserialize(fileStream);
            }
            return gameData;
        }

        public static bool IsLoad()
        {
            return File.Exists(SavePath);
        }
    }
}
