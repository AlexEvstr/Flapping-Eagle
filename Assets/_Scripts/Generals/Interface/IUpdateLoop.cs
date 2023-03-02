using System;

namespace evstr.Generals
{
    public interface IUpdateLoop 
    {
        event Action OnUpdate;
    }
}
