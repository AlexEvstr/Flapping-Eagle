#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Zenject.ConcreteBinderGeneric`1<evstr.Generals.IInputSystem>
struct ConcreteBinderGeneric_1_tA25FC07AA92A08853CF9C77E9E95AEF572A7F8C1;
// Zenject.ConcreteBinderGeneric`1<System.Object>
struct ConcreteBinderGeneric_1_tCC61CE909F1A4542D875AFC44757CD1459E51A43;
// Zenject.ConcreteIdBinderGeneric`1<evstr.Generals.IInputSystem>
struct ConcreteIdBinderGeneric_1_t43ACEDDE3E84B97701B1663B3C506BFA5E6049CB;
// Zenject.ConcreteIdBinderGeneric`1<System.Object>
struct ConcreteIdBinderGeneric_1_t554183CC8D49C38AF181B0D81B325AD95C0E1C3D;
// Zenject.ConcreteIdBinderGeneric`1<evstr.States.StateMachine>
struct ConcreteIdBinderGeneric_1_t5D2CF31D0445A91256C95B61FC1817EF2C7136A9;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>>
struct Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB;
// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider>
struct Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// Zenject.FromBinderGeneric`1<evstr.Generals.InputSystemAndroid>
struct FromBinderGeneric_1_t0DE11DE3BCE304E173588A21444941207F115A01;
// Zenject.FromBinderGeneric`1<System.Object>
struct FromBinderGeneric_1_t3A7D6B5824D10333BC2160BF9C081FEE9049EBF9;
// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId>
struct HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.List`1<Zenject.BindInfo>
struct List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE;
// System.Collections.Generic.List`1<Zenject.BindStatement>
struct List_1_t1DF267117DA969233BD90D3269D954E36CB0766A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Zenject.IValidatable>
struct List_1_t758D810E91F87AF6AF211875263F8E39E9597B16;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<Zenject.BindStatement>
struct Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Zenject.DiContainer[][]
struct DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// evstr.Audio.AudioService
struct AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// Zenject.BindInfo
struct BindInfo_t0799128A181D817F225511F62C23A96620EAE096;
// Zenject.BindStatement
struct BindStatement_t99650D1624D87D8D27CC11332311BBAF41A119CE;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Zenject.ConcreteIdArgConditionCopyNonLazyBinder
struct ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF;
// evstr.DisableZone
struct DisableZone_tB58E98A73B4B787AC0BA3CE6C011AE741086F99C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// evstr.GUI.GUIService
struct GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916;
// evstr.Zenject.GameController
struct GameController_t4276871139306213CF41F69A38F723DF69283EA4;
// evstr.GameConfig.GameData
struct GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87;
// evstr.Zenject.GameInstaller
struct GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// evstr.ObjectDetector.IDetector
struct IDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// evstr.Player.IFlap
struct IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821;
// evstr.GameConfig.IGameData
struct IGameData_t5712DCD902205F7CB05054C98D488864B4629800;
// evstr.Generals.IInputSystem
struct IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B;
// evstr.States.IState
struct IState_t822F214CDD779BE0E52AB9452C3B726B0E81AA2F;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// evstr.Generals.IUpdateLoop
struct IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9;
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder
struct IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670;
// evstr.Generals.InputSystemAndroid
struct InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Zenject.LazyInstanceInjector
struct LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Zenject.MonoInstaller
struct MonoInstaller_tBBEFD416D08E17AA4AD48CE325EE7C039BF1F212;
// Zenject.MonoInstallerBase
struct MonoInstallerBase_t5F01FAD5A0192687900E2E3818B8412BC27BCED4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPool
struct ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082;
// evstr.ObjectDetector.ObstacleDetecter
struct ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED;
// evstr.Obstacle.ObstacleMovement
struct ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F;
// evstr.ObstacleSpawner
struct ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// evstr.Player.Player
struct Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568;
// evstr.Player.PlayerBehaviour
struct PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// evstr.Generals.ResourceController
struct ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434;
// evstr.RestartStateGame
struct RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15;
// evstr.ObjectDetector.ScoreZoneDetector
struct ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// Zenject.Internal.SingletonMarkRegistry
struct SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// evstr.States.StartGameState
struct StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77;
// evstr.States.StateMachine
struct StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A;
// evstr.States.StopGameState
struct StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// evstr.GUI.UIBackgroundLoop
struct UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B;
// evstr.GUI.UIBaseButton
struct UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728;
// evstr.GUI.UIEasyLevelButton
struct UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F;
// evstr.GUI.UIHardLevelButton
struct UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F;
// evstr.GUI.UIMainMenuButton
struct UIMainMenuButton_tE0709A6E98A755F8DFFAEA20FBF321380931AF8B;
// evstr.GUI.UIMediumLevelButton
struct UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E;
// evstr.GUI.UIPanelSettings
struct UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48;
// evstr.GUI.UISoundToggle
struct UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F;
// evstr.GUI.UIStartButton
struct UIStartButton_t57D69C6092D5A3C4D5F9502E9CFB30862D42F702;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Zenject.ZenjectSettings
struct ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// evstr.ObstacleSpawner/<Spawner>d__6
struct U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_t4276871139306213CF41F69A38F723DF69283EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_t822F214CDD779BE0E52AB9452C3B726B0E81AA2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D15682C5102ED8DD50714F5AA65CD6318C8057;
IL2CPP_EXTERN_C const RuntimeMethod* AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcreteBinderGeneric_1_To_TisInputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5_m43E860CC8012EA8677F8F4DDC68D3BB33DE147A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisAudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7_m34239FA73D5394CD07050A8CEC8E769EF163B32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisGUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916_m1FC0B0F1434B9EEDC8144CF93AB2F4304A5BB301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisGameController_t4276871139306213CF41F69A38F723DF69283EA4_m35962281D698418078543A7B14E6DD11B4C2CF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisIGameData_t5712DCD902205F7CB05054C98D488864B4629800_m659A4D2DFA2CB153EB0C883175D52EC390748218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisIUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_mAAC3778483C698F2C665AC87AAE48E24346C720A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4_m22610167AB536541A438E4B7C4C96EF8AB133F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_BindInstance_TisResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434_mE43F708C2C86A92585C1B36A1BDA0C688827A440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisIInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_mC78F19073CF50AD1D808C81B9151F55C1F472D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisStateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A_m4DF1D0EB5ECD625FF86AE74A7A4546211532F7D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_m65338136AD8F133419CD707A7040E347499902C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F_mBA2389E5CFF1CA82E8F9DB601928B8AFA0CAD8C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnerU3Ed__6_System_Collections_IEnumerator_Reset_m854FD2237A20EBAD913AEA4B490644D6E32FD346_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider> Zenject.DiContainer::_decorators
	Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF* ____decorators_0;
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>> Zenject.DiContainer::_providers
	Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB* ____providers_1;
	// Zenject.DiContainer[][] Zenject.DiContainer::_containerLookups
	DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8* ____containerLookups_2;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesInProgress_3;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesTwiceInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesTwiceInProgress_4;
	// Zenject.LazyInstanceInjector Zenject.DiContainer::_lazyInjector
	LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31* ____lazyInjector_5;
	// Zenject.Internal.SingletonMarkRegistry Zenject.DiContainer::_singletonMarkRegistry
	SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443* ____singletonMarkRegistry_6;
	// System.Collections.Generic.Queue`1<Zenject.BindStatement> Zenject.DiContainer::_currentBindings
	Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990* ____currentBindings_7;
	// System.Collections.Generic.List`1<Zenject.BindStatement> Zenject.DiContainer::_childBindings
	List_1_t1DF267117DA969233BD90D3269D954E36CB0766A* ____childBindings_8;
	// System.Collections.Generic.HashSet`1<System.Type> Zenject.DiContainer::_validatedTypes
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ____validatedTypes_9;
	// System.Collections.Generic.List`1<Zenject.IValidatable> Zenject.DiContainer::_validationQueue
	List_1_t758D810E91F87AF6AF211875263F8E39E9597B16* ____validationQueue_10;
	// UnityEngine.Transform Zenject.DiContainer::_contextTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____contextTransform_11;
	// System.Boolean Zenject.DiContainer::_hasLookedUpContextTransform
	bool ____hasLookedUpContextTransform_12;
	// UnityEngine.Transform Zenject.DiContainer::_inheritedDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____inheritedDefaultParent_13;
	// UnityEngine.Transform Zenject.DiContainer::_explicitDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____explicitDefaultParent_14;
	// System.Boolean Zenject.DiContainer::_hasExplicitDefaultParent
	bool ____hasExplicitDefaultParent_15;
	// Zenject.ZenjectSettings Zenject.DiContainer::_settings
	ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF* ____settings_16;
	// System.Boolean Zenject.DiContainer::_hasResolvedRoots
	bool ____hasResolvedRoots_17;
	// System.Boolean Zenject.DiContainer::_isFinalizingBinding
	bool ____isFinalizingBinding_18;
	// System.Boolean Zenject.DiContainer::_isValidating
	bool ____isValidating_19;
	// System.Boolean Zenject.DiContainer::_isInstalling
	bool ____isInstalling_20;
	// System.Boolean Zenject.DiContainer::<AssertOnNewGameObjects>k__BackingField
	bool ___U3CAssertOnNewGameObjectsU3Ek__BackingField_21;
};

// evstr.Zenject.GameController
struct GameController_t4276871139306213CF41F69A38F723DF69283EA4  : public RuntimeObject
{
	// evstr.GameConfig.GameData evstr.Zenject.GameController::_gameData
	GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* ____gameData_0;
};

// evstr.GameConfig.GameData
struct GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87  : public RuntimeObject
{
	// System.Int32 evstr.GameConfig.GameData::_score
	int32_t ____score_0;
	// System.Boolean evstr.GameConfig.GameData::_audioStatus
	bool ____audioStatus_1;
	// evstr.GameConfig.GameDifficulty evstr.GameConfig.GameData::_gameDifficulty
	int32_t ____gameDifficulty_2;
	// evstr.GUI.GUIService evstr.GameConfig.GameData::_guiService
	GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ____guiService_3;
};

// Zenject.IfNotBoundBinder
struct IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF  : public RuntimeObject
{
	// Zenject.BindInfo Zenject.IfNotBoundBinder::<BindInfo>k__BackingField
	BindInfo_t0799128A181D817F225511F62C23A96620EAE096* ___U3CBindInfoU3Ek__BackingField_0;
};

// evstr.Generals.InputSystemAndroid
struct InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5  : public RuntimeObject
{
	// System.Action evstr.Generals.InputSystemAndroid::OnTapped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTapped_0;
	// evstr.Generals.IUpdateLoop evstr.Generals.InputSystemAndroid::_updater
	RuntimeObject* ____updater_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// evstr.Player.PlayerBehaviour
struct PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61  : public RuntimeObject
{
	// evstr.Player.Player evstr.Player.PlayerBehaviour::_player
	Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* ____player_0;
};

// evstr.RestartStateGame
struct RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32  : public RuntimeObject
{
	// evstr.Zenject.GameController evstr.RestartStateGame::_gameController
	GameController_t4276871139306213CF41F69A38F723DF69283EA4* ____gameController_0;
};

// evstr.GameConfig.SaveLoadData
struct SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77  : public RuntimeObject
{
};

struct SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields
{
	// System.String evstr.GameConfig.SaveLoadData::SavePath
	String_t* ___SavePath_0;
};

// evstr.States.StartGameState
struct StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77  : public RuntimeObject
{
	// evstr.ObstacleSpawner evstr.States.StartGameState::_obstacleSpawner
	ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ____obstacleSpawner_0;
	// evstr.GUI.GUIService evstr.States.StartGameState::_guiService
	GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ____guiService_1;
};

// evstr.States.StateMachine
struct StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A  : public RuntimeObject
{
	// evstr.States.StartGameState evstr.States.StateMachine::_startGameState
	StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* ____startGameState_0;
	// evstr.States.StopGameState evstr.States.StateMachine::_stopGameState
	StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* ____stopGameState_1;
	// evstr.RestartStateGame evstr.States.StateMachine::_restartState
	RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* ____restartState_2;
	// evstr.States.IState evstr.States.StateMachine::_currentState
	RuntimeObject* ____currentState_3;
};

// evstr.States.StopGameState
struct StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7  : public RuntimeObject
{
	// evstr.ObstacleSpawner evstr.States.StopGameState::_obstacleSpawner
	ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ____obstacleSpawner_0;
	// evstr.GUI.GUIService evstr.States.StopGameState::_guiService
	GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ____guiService_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// evstr.ObstacleSpawner/<Spawner>d__6
struct U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC  : public RuntimeObject
{
	// System.Int32 evstr.ObstacleSpawner/<Spawner>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object evstr.ObstacleSpawner/<Spawner>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// evstr.ObstacleSpawner evstr.ObstacleSpawner/<Spawner>d__6::<>4__this
	ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Zenject.NonLazyBinder
struct NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A  : public IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// Zenject.CopyNonLazyBinder
struct CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF  : public NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A
{
	// System.Collections.Generic.List`1<Zenject.BindInfo> Zenject.CopyNonLazyBinder::_secondaryBindInfos
	List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE* ____secondaryBindInfos_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581  : public CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Zenject.InstantiateCallbackConditionCopyNonLazyBinder
struct InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE  : public ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Zenject.ArgConditionCopyNonLazyBinder
struct ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238  : public InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// evstr.Audio.AudioService
struct AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource evstr.Audio.AudioService::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
	// evstr.GameConfig.IGameData evstr.Audio.AudioService::_gameData
	RuntimeObject* ____gameData_5;
	// UnityEngine.AudioSource evstr.Audio.AudioService::_flapSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____flapSource_6;
	// UnityEngine.AudioSource evstr.Audio.AudioService::_collisionSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____collisionSource_7;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Zenject.ConcreteIdArgConditionCopyNonLazyBinder
struct ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48  : public ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238
{
};

// evstr.DisableZone
struct DisableZone_tB58E98A73B4B787AC0BA3CE6C011AE741086F99C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// evstr.GUI.GUIService
struct GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject evstr.GUI.GUIService::_panelGameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelGameOver_4;
	// UnityEngine.GameObject evstr.GUI.GUIService::_panelMainMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelMainMenu_5;
	// UnityEngine.UI.Text evstr.GUI.GUIService::_textScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____textScore_6;
};

// Zenject.MonoInstallerBase
struct MonoInstallerBase_t5F01FAD5A0192687900E2E3818B8412BC27BCED4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zenject.DiContainer Zenject.MonoInstallerBase::<Container>k__BackingField
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___U3CContainerU3Ek__BackingField_4;
};

// ObjectPool
struct ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// evstr.Generals.ResourceController ObjectPool::_resourceController
	ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* ____resourceController_4;
	// System.Int32 ObjectPool::_amountToPool
	int32_t ____amountToPool_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::_pooledObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____pooledObjects_6;
	// UnityEngine.GameObject ObjectPool::_objectToPool
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____objectToPool_7;
	// evstr.Generals.IUpdateLoop ObjectPool::_updater
	RuntimeObject* ____updater_8;
	// evstr.States.StateMachine ObjectPool::_stateMachine
	StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ____stateMachine_9;
	// evstr.GameConfig.IGameData ObjectPool::_gameData
	RuntimeObject* ____gameData_10;
	// evstr.Audio.AudioService ObjectPool::_audioService
	AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ____audioService_11;
};

struct ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields
{
	// ObjectPool ObjectPool::Instance
	ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* ___Instance_12;
};

// evstr.ObjectDetector.ObstacleDetecter
struct ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// evstr.States.StateMachine evstr.ObjectDetector.ObstacleDetecter::_stateMachine
	StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ____stateMachine_4;
	// evstr.Audio.AudioService evstr.ObjectDetector.ObstacleDetecter::_audioService
	AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ____audioService_5;
};

// evstr.Obstacle.ObstacleMovement
struct ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// evstr.ObjectDetector.ObstacleDetecter evstr.Obstacle.ObstacleMovement::_obstacleDetecterOne
	ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* ____obstacleDetecterOne_4;
	// evstr.ObjectDetector.ObstacleDetecter evstr.Obstacle.ObstacleMovement::_obstacleDetecterTwo
	ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* ____obstacleDetecterTwo_5;
	// evstr.ObjectDetector.ScoreZoneDetector evstr.Obstacle.ObstacleMovement::_scoreZoneDetector
	ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* ____scoreZoneDetector_6;
	// System.Single evstr.Obstacle.ObstacleMovement::_obstacleSpeed
	float ____obstacleSpeed_7;
	// evstr.Generals.IUpdateLoop evstr.Obstacle.ObstacleMovement::_updater
	RuntimeObject* ____updater_8;
};

// evstr.ObstacleSpawner
struct ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single evstr.ObstacleSpawner::_coordinateX
	float ____coordinateX_4;
	// System.Single evstr.ObstacleSpawner::_coordinateY
	float ____coordinateY_5;
	// System.Single evstr.ObstacleSpawner::_topLimit
	float ____topLimit_6;
	// System.Single evstr.ObstacleSpawner::_botLimit
	float ____botLimit_7;
	// UnityEngine.Vector2 evstr.ObstacleSpawner::_spawnPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____spawnPosition_8;
};

// evstr.Player.Player
struct Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D evstr.Player.Player::_rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody2D_4;
	// evstr.Player.IFlap evstr.Player.Player::_flapBehaviour
	RuntimeObject* ____flapBehaviour_5;
	// evstr.Generals.IInputSystem evstr.Player.Player::_inputSystem
	RuntimeObject* ____inputSystem_6;
	// evstr.Audio.AudioService evstr.Player.Player::_audioService
	AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ____audioService_7;
	// System.Single evstr.Player.Player::_forceFlap
	float ____forceFlap_8;
};

// evstr.Generals.ResourceController
struct ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject evstr.Generals.ResourceController::_easyObstaclePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____easyObstaclePrefab_4;
	// UnityEngine.GameObject evstr.Generals.ResourceController::_mediumObstaclePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mediumObstaclePrefab_5;
	// UnityEngine.GameObject evstr.Generals.ResourceController::_hardObstaclePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hardObstaclePrefab_6;
	// evstr.GameConfig.IGameData evstr.Generals.ResourceController::_gameData
	RuntimeObject* ____gameData_7;
};

// evstr.ObjectDetector.ScoreZoneDetector
struct ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// evstr.GameConfig.IGameData evstr.ObjectDetector.ScoreZoneDetector::_gameData
	RuntimeObject* ____gameData_4;
};

// evstr.GUI.UIBackgroundLoop
struct UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single evstr.GUI.UIBackgroundLoop::_speed
	float ____speed_4;
	// UnityEngine.MeshRenderer evstr.GUI.UIBackgroundLoop::_meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____meshRenderer_5;
	// UnityEngine.Vector2 evstr.GUI.UIBackgroundLoop::_meshOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____meshOffset_6;
};

// evstr.GUI.UIBaseButton
struct UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button evstr.GUI.UIBaseButton::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// evstr.GUI.UIPanelSettings
struct UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// evstr.GUI.UIEasyLevelButton evstr.GUI.UIPanelSettings::_easyLevelButton
	UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* ____easyLevelButton_4;
	// evstr.GUI.UIMediumLevelButton evstr.GUI.UIPanelSettings::_mediumLevelButton
	UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* ____mediumLevelButton_5;
	// evstr.GUI.UIHardLevelButton evstr.GUI.UIPanelSettings::_hardLevelButton
	UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* ____hardLevelButton_6;
	// evstr.GameConfig.IGameData evstr.GUI.UIPanelSettings::_gameData
	RuntimeObject* ____gameData_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Zenject.MonoInstaller
struct MonoInstaller_tBBEFD416D08E17AA4AD48CE325EE7C039BF1F212  : public MonoInstallerBase_t5F01FAD5A0192687900E2E3818B8412BC27BCED4
{
};

// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15  : public ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// evstr.GUI.UIEasyLevelButton
struct UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// UnityEngine.GameObject evstr.GUI.UIEasyLevelButton::_imageActive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____imageActive_6;
	// evstr.GameConfig.IGameData evstr.GUI.UIEasyLevelButton::_gameData
	RuntimeObject* ____gameData_7;
	// evstr.GUI.UIPanelSettings evstr.GUI.UIEasyLevelButton::_panleSetting
	UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* ____panleSetting_8;
};

// evstr.GUI.UIHardLevelButton
struct UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// UnityEngine.GameObject evstr.GUI.UIHardLevelButton::_imageActive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____imageActive_6;
	// evstr.GameConfig.IGameData evstr.GUI.UIHardLevelButton::_gameData
	RuntimeObject* ____gameData_7;
	// evstr.GUI.UIPanelSettings evstr.GUI.UIHardLevelButton::_panleSetting
	UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* ____panleSetting_8;
};

// evstr.GUI.UIMainMenuButton
struct UIMainMenuButton_tE0709A6E98A755F8DFFAEA20FBF321380931AF8B  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// evstr.States.StateMachine evstr.GUI.UIMainMenuButton::_stateMachine
	StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ____stateMachine_5;
};

// evstr.GUI.UIMediumLevelButton
struct UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// UnityEngine.GameObject evstr.GUI.UIMediumLevelButton::_imageActive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____imageActive_6;
	// evstr.GUI.UIPanelSettings evstr.GUI.UIMediumLevelButton::_panleSetting
	UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* ____panleSetting_7;
};

// evstr.GUI.UISoundToggle
struct UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// evstr.GameConfig.IGameData evstr.GUI.UISoundToggle::_gameData
	RuntimeObject* ____gameData_5;
	// UnityEngine.GameObject evstr.GUI.UISoundToggle::_checkmark
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____checkmark_6;
};

// evstr.GUI.UIStartButton
struct UIStartButton_t57D69C6092D5A3C4D5F9502E9CFB30862D42F702  : public UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728
{
	// evstr.States.StateMachine evstr.GUI.UIStartButton::_gameController
	StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ____gameController_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// Zenject.FromBinder
struct FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49  : public ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15
{
	// Zenject.DiContainer Zenject.FromBinder::<BindContainer>k__BackingField
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___U3CBindContainerU3Ek__BackingField_2;
	// Zenject.BindStatement Zenject.FromBinder::<BindStatement>k__BackingField
	BindStatement_t99650D1624D87D8D27CC11332311BBAF41A119CE* ___U3CBindStatementU3Ek__BackingField_3;
};

// evstr.Zenject.GameInstaller
struct GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675  : public MonoInstaller_tBBEFD416D08E17AA4AD48CE325EE7C039BF1F212
{
	// System.Action evstr.Zenject.GameInstaller::OnUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdate_5;
	// evstr.GUI.GUIService evstr.Zenject.GameInstaller::_guiService
	GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ____guiService_6;
	// evstr.ObstacleSpawner evstr.Zenject.GameInstaller::_obstacleSpawner
	ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ____obstacleSpawner_7;
	// evstr.Generals.ResourceController evstr.Zenject.GameInstaller::_resourceController
	ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* ____resourceController_8;
	// evstr.Audio.AudioService evstr.Zenject.GameInstaller::_soundManager
	AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ____soundManager_9;
	// evstr.Zenject.GameController evstr.Zenject.GameInstaller::_gameController
	GameController_t4276871139306213CF41F69A38F723DF69283EA4* ____gameController_10;
};

// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder
struct IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670  : public ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Zenject.FromBinderGeneric`1<evstr.Generals.IInputSystem>
struct FromBinderGeneric_1_t9135760EBB2A80B0D8B1961075E411B5A524835A  : public FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49
{
};

// Zenject.FromBinderGeneric`1<evstr.Generals.InputSystemAndroid>
struct FromBinderGeneric_1_t0DE11DE3BCE304E173588A21444941207F115A01  : public FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49
{
};

// Zenject.FromBinderGeneric`1<evstr.States.StateMachine>
struct FromBinderGeneric_1_tF8AD50AC64A55B86D3CFFA7C2540E50ED1F7EEFF  : public FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// Zenject.ConcreteBinderGeneric`1<evstr.Generals.IInputSystem>
struct ConcreteBinderGeneric_1_tA25FC07AA92A08853CF9C77E9E95AEF572A7F8C1  : public FromBinderGeneric_1_t9135760EBB2A80B0D8B1961075E411B5A524835A
{
};

// Zenject.ConcreteBinderGeneric`1<evstr.States.StateMachine>
struct ConcreteBinderGeneric_1_tB40065889209AD25C7469616728E4E75FCCB2553  : public FromBinderGeneric_1_tF8AD50AC64A55B86D3CFFA7C2540E50ED1F7EEFF
{
};

// Zenject.ConcreteIdBinderGeneric`1<evstr.Generals.IInputSystem>
struct ConcreteIdBinderGeneric_1_t43ACEDDE3E84B97701B1663B3C506BFA5E6049CB  : public ConcreteBinderGeneric_1_tA25FC07AA92A08853CF9C77E9E95AEF572A7F8C1
{
};

// Zenject.ConcreteIdBinderGeneric`1<evstr.States.StateMachine>
struct ConcreteIdBinderGeneric_1_t5D2CF31D0445A91256C95B61FC1817EF2C7136A9  : public ConcreteBinderGeneric_1_tB40065889209AD25C7469616728E4E75FCCB2553
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<System.Object>(TContract)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdBinderGeneric_1_t554183CC8D49C38AF181B0D81B325AD95C0E1C3D* DiContainer_Bind_TisRuntimeObject_mB9EC9A3972D1EB058FFE497F1B5C957662C16EE1_gshared (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, const RuntimeMethod* method) ;
// Zenject.FromBinderGeneric`1<TConcrete> Zenject.ConcreteBinderGeneric`1<System.Object>::To<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FromBinderGeneric_1_t3A7D6B5824D10333BC2160BF9C081FEE9049EBF9* ConcreteBinderGeneric_1_To_TisRuntimeObject_mDBCC133A853DDC629DFE5BB00CE9D482F5A5A5FE_gshared (ConcreteBinderGeneric_1_tCC61CE909F1A4542D875AFC44757CD1459E51A43* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject evstr.Generals.ResourceController::GetObstaclePrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourceController_GetObstaclePrefab_m3D8611CE6BC306C50A9015A54293A0771BFA5845 (ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPool::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Create_mA53B4F0459BC4A4D450714C1DB06D8BA8ADC389B (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<evstr.Obstacle.ObstacleMovement>()
inline ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* GameObject_GetComponent_TisObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F_mBA2389E5CFF1CA82E8F9DB601928B8AFA0CAD8C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void evstr.Obstacle.ObstacleMovement::Construct(evstr.Generals.IUpdateLoop,evstr.States.StateMachine,evstr.GameConfig.IGameData,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMovement_Construct_m95CB0650402184BE7BFFEDB56C0D1C53D612105E (ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* __this, RuntimeObject* ___update0, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___stateMachine1, RuntimeObject* ___gameData2, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void evstr.Zenject.GameController::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SaveGame_mDC88AC4CDEF51C450D3DED086C53F158276B2588 (GameController_t4276871139306213CF41F69A38F723DF69283EA4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void ObjectPool::InitPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_InitPool_m896757E9574BDD98BBDC4455F3E9A14518517340 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator evstr.ObstacleSpawner::Spawner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleSpawner_Spawner_m3C16197B9A10253CBD651CF0469E51B9F37F006E (ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void evstr.ObstacleSpawner/<Spawner>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnerU3Ed__6__ctor_m686820E18049FD93E28BF1D1BDD06039F12C4364 (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPool::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_GetPooledObject_m82F32DCA94B6336E56B260155F14236D0DB8C59F (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void evstr.GameConfig.SaveLoadData::Save(evstr.GameConfig.GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_Save_mCC0888DB093CB850551F4B186F2D47C497E43AA3 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* ___gameData0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// evstr.GameConfig.GameData evstr.GameConfig.SaveLoadData::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* SaveLoadData_Load_m5724367D883F31CC6E5954BB66921A4589626281 (const RuntimeMethod* method) ;
// System.Void evstr.GameConfig.GameData::TransferDependency(evstr.GUI.GUIService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_TransferDependency_m5807F5E07560653F31F74DB8E14FDEEEAC7D5596_inline (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService0, const RuntimeMethod* method) ;
// Zenject.DiContainer Zenject.MonoInstallerBase::get_Container()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline (MonoInstallerBase_t5F01FAD5A0192687900E2E3818B8412BC27BCED4* __this, const RuntimeMethod* method) ;
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.GameConfig.IGameData>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisIGameData_t5712DCD902205F7CB05054C98D488864B4629800_m659A4D2DFA2CB153EB0C883175D52EC390748218 (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, RuntimeObject*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.GUI.GUIService>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisGUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916_m1FC0B0F1434B9EEDC8144CF93AB2F4304A5BB301 (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.ObstacleSpawner>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4_m22610167AB536541A438E4B7C4C96EF8AB133F08 (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.Generals.ResourceController>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434_mE43F708C2C86A92585C1B36A1BDA0C688827A440 (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.Audio.AudioService>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisAudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7_m34239FA73D5394CD07050A8CEC8E769EF163B32C (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.Generals.IUpdateLoop>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisIUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_mAAC3778483C698F2C665AC87AAE48E24346C720A (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, RuntimeObject*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<evstr.Generals.IInputSystem>()
inline ConcreteIdBinderGeneric_1_t43ACEDDE3E84B97701B1663B3C506BFA5E6049CB* DiContainer_Bind_TisIInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_mC78F19073CF50AD1D808C81B9151F55C1F472D5C (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_t43ACEDDE3E84B97701B1663B3C506BFA5E6049CB* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_mB9EC9A3972D1EB058FFE497F1B5C957662C16EE1_gshared)(__this, method);
}
// Zenject.FromBinderGeneric`1<TConcrete> Zenject.ConcreteBinderGeneric`1<evstr.Generals.IInputSystem>::To<evstr.Generals.InputSystemAndroid>()
inline FromBinderGeneric_1_t0DE11DE3BCE304E173588A21444941207F115A01* ConcreteBinderGeneric_1_To_TisInputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5_m43E860CC8012EA8677F8F4DDC68D3BB33DE147A6 (ConcreteBinderGeneric_1_tA25FC07AA92A08853CF9C77E9E95AEF572A7F8C1* __this, const RuntimeMethod* method)
{
	return ((  FromBinderGeneric_1_t0DE11DE3BCE304E173588A21444941207F115A01* (*) (ConcreteBinderGeneric_1_tA25FC07AA92A08853CF9C77E9E95AEF572A7F8C1*, const RuntimeMethod*))ConcreteBinderGeneric_1_To_TisRuntimeObject_mDBCC133A853DDC629DFE5BB00CE9D482F5A5A5FE_gshared)(__this, method);
}
// Zenject.ConcreteIdArgConditionCopyNonLazyBinder Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder::AsSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48* ScopeConcreteIdArgConditionCopyNonLazyBinder_AsSingle_mB57F46824A4D941E55551207E05B4B7319818254 (ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* __this, const RuntimeMethod* method) ;
// System.Void evstr.Zenject.GameController::.ctor(evstr.GameConfig.GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mCD8C0A11EC8754BDAD4382034E5ADAED279F1A1C (GameController_t4276871139306213CF41F69A38F723DF69283EA4* __this, GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* ___gameData0, const RuntimeMethod* method) ;
// Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.DiContainer::BindInstance<evstr.Zenject.GameController>(TContract)
inline IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* DiContainer_BindInstance_TisGameController_t4276871139306213CF41F69A38F723DF69283EA4_m35962281D698418078543A7B14E6DD11B4C2CF8E (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, GameController_t4276871139306213CF41F69A38F723DF69283EA4* ___instance0, const RuntimeMethod* method)
{
	return ((  IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, GameController_t4276871139306213CF41F69A38F723DF69283EA4*, const RuntimeMethod*))DiContainer_BindInstance_TisRuntimeObject_m652609D69A3D8A1470B34B649CA0176C91111E4D_gshared)(__this, ___instance0, method);
}
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<evstr.States.StateMachine>()
inline ConcreteIdBinderGeneric_1_t5D2CF31D0445A91256C95B61FC1817EF2C7136A9* DiContainer_Bind_TisStateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A_m4DF1D0EB5ECD625FF86AE74A7A4546211532F7D7 (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_t5D2CF31D0445A91256C95B61FC1817EF2C7136A9* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_mB9EC9A3972D1EB058FFE497F1B5C957662C16EE1_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Zenject.MonoInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoInstaller__ctor_m8D9D340237839C65FC88132719B32970FB7A76BE (MonoInstaller_tBBEFD416D08E17AA4AD48CE325EE7C039BF1F212* __this, const RuntimeMethod* method) ;
// System.Void evstr.ObjectDetector.ObstacleDetecter::Construct(evstr.States.StateMachine,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleDetecter_Construct_mEB68FC444F2D5FDABB034C3053311CE9B21A0680 (ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* __this, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___stateMachine0, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService1, const RuntimeMethod* method) ;
// System.Void evstr.ObjectDetector.ScoreZoneDetector::Construct(evstr.GameConfig.IGameData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreZoneDetector_Construct_m3291BCE60D0CEFF6C494374EB4FB20FFBF165793_inline (ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void evstr.States.StateMachine::EntryState(evstr.States.StateGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_EntryState_mBBA9D3222F87426F2ABBAE9DB09AEB09016ED82F (StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* __this, int32_t ___stateGame0, const RuntimeMethod* method) ;
// System.Void evstr.Audio.AudioService::PlayCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService_PlayCollisionSound_m2563BDB4C5E509A148AA88974A9B19986EFD6385 (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void evstr.ObstacleSpawner::StartSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner_StartSpawn_m333336B9419408D8CCF1B48624D003605A3EA1C0 (ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.GUIService::SetVisibilityPanelMainMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_SetVisibilityPanelMainMenu_m9108669F079BBC7BAF18303A880F5493B1E505BE (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void evstr.States.StartGameState::.ctor(evstr.ObstacleSpawner,evstr.GUI.GUIService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameState__ctor_m4D5324E76A40D2AF3F041421DC1E3B0908F49A6D (StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___obstacleSpawner0, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService1, const RuntimeMethod* method) ;
// System.Void evstr.States.StopGameState::.ctor(evstr.ObstacleSpawner,evstr.GUI.GUIService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGameState__ctor_mD967B23BE7F9CA4C7D3BA847C7FF5017FA60828B (StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___obstacleSpawner0, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService1, const RuntimeMethod* method) ;
// System.Void evstr.RestartStateGame::.ctor(evstr.Zenject.GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartStateGame__ctor_m7826282E3786E147206FA1BCD75F2E5985D03878 (RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* __this, GameController_t4276871139306213CF41F69A38F723DF69283EA4* ___gameController0, const RuntimeMethod* method) ;
// System.Void evstr.GUI.GUIService::SetVisibilityPanelGameOver(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_SetVisibilityPanelGameOver_mF7AC1E1DAF9B19650A724BF36AFC284A6A1C53A7 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void evstr.Player.PlayerBehaviour::.ctor(evstr.Player.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehaviour__ctor_m8DBCB3C0DB5E0BB7A077CC5FB99ED52A926A9D19 (PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61* __this, Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* ___player0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<evstr.ObjectDetector.IDetector>()
inline RuntimeObject* GameObject_GetComponent_TisIDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_m65338136AD8F133419CD707A7040E347499902C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Rigidbody2D evstr.Player.Player::get_GetRigidbody2D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Player_get_GetRigidbody2D_mC9A7F4D65C7E8EC93CC0265A0260B1463CE62699_inline (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single evstr.Player.Player::get_ForceFlap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_ForceFlap_mC2AAD39D4CD43144513B6602AB4AC80FF318F826_inline (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIPanelSettings::ChangeActiveButton(evstr.GameConfig.GameDifficulty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B (UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* __this, int32_t ___gameDifficulty0, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIBaseButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702 (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIEasyLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton_Active_m85B308D93CE96E13B076A261B9CA1DC689762B77 (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIMediumLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton_DisActive_mCE4ECC57E711A6DDE0352E6FF0197CB0C4F9DCC5 (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIHardLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton_DisActive_m5E6115087242F44463B529F34E0BA387617286E0 (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIEasyLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton_DisActive_mEC9755E06B4431D757456272DCEA71103B82BE31 (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIMediumLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton_Active_m2AF3B18D66C9134B4646A27A07CD9E1C822830D8 (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIHardLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton_Active_mCC3A3041FA3858DDF48EB246605AF8BD34DA65B6 (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___value0, const RuntimeMethod* method) ;
// System.Void evstr.GUI.UIBaseButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton_OnEnable_m3D0D206E16914ECE7C9572B1A7BDAAF839F86EFA (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) ;
// System.Void evstr.Generals.InputSystemAndroid::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_OnEnable_m7A77FF0BB8F3E433947B3F456D3969261289218D (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void evstr.GUI.GUIService::UpdateTextScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_UpdateTextScore_mD0BF02B073F914CF1D2BF092EB56854D9D6427F0 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Boolean evstr.GameConfig.SaveLoadData::IsLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SaveLoadData_IsLoad_m372193311D809A2F9409A19A6EA5FEBAD40EC679 (const RuntimeMethod* method) ;
// System.Void evstr.GameConfig.GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_m7E2AD3400BADC3A01AE5C0A47D1E20BA0AE02599 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectPool::Construct(evstr.Generals.IUpdateLoop,evstr.States.StateMachine,evstr.GameConfig.IGameData,evstr.Generals.ResourceController,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Construct_m581FC74F5157059A17A32CA3D54055FC6F168467 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, RuntimeObject* ___update0, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___stateMachine1, RuntimeObject* ___gameData2, ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* ___resourceController3, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService4, const RuntimeMethod* method) 
{
	{
		// _updater = update;
		RuntimeObject* L_0 = ___update0;
		__this->____updater_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____updater_8), (void*)L_0);
		// _stateMachine = stateMachine;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_1 = ___stateMachine1;
		__this->____stateMachine_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateMachine_9), (void*)L_1);
		// _gameData = gameData;
		RuntimeObject* L_2 = ___gameData2;
		__this->____gameData_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_10), (void*)L_2);
		// _resourceController = resourceController;
		ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* L_3 = ___resourceController3;
		__this->____resourceController_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resourceController_4), (void*)L_3);
		// _audioService = audioService;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_4 = ___audioService4;
		__this->____audioService_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioService_11), (void*)L_4);
		// }
		return;
	}
}
// System.Void ObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Awake_m91BEBE4AB885A4A68643A352DE5BCAE2422650B8 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_0 = ((ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var))->___Instance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Instance = this;
		((ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var))->___Instance_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var))->___Instance_12), (void*)__this);
		goto IL_0016;
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// _pooledObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____pooledObjects_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pooledObjects_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void ObjectPool::InitPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_InitPool_m896757E9574BDD98BBDC4455F3E9A14518517340 (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// _objectToPool = _resourceController.GetObstaclePrefab();
		ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* L_0 = __this->____resourceController_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ResourceController_GetObstaclePrefab_m3D8611CE6BC306C50A9015A54293A0771BFA5845(L_0, NULL);
		__this->____objectToPool_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectToPool_7), (void*)L_1);
		// for (int i = 0; i < _amountToPool; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// var obj = Create();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = ObjectPool_Create_mA53B4F0459BC4A4D450714C1DB06D8BA8ADC389B(__this, NULL);
		V_1 = L_2;
		// _pooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____pooledObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < _amountToPool; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < _amountToPool; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____amountToPool_5;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPool::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_GetPooledObject_m82F32DCA94B6336E56B260155F14236D0DB8C59F (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < _pooledObjects.Count; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!_pooledObjects[i].activeInHierarchy)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____pooledObjects_6;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return _pooledObjects[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____pooledObjects_6;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < _pooledObjects.Count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < _pooledObjects.Count; i++)
		int32_t L_8 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->____pooledObjects_6;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// var obj = Create();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = ObjectPool_Create_mA53B4F0459BC4A4D450714C1DB06D8BA8ADC389B(__this, NULL);
		V_0 = L_11;
		// _pooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->____pooledObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_13, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.GameObject ObjectPool::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Create_mA53B4F0459BC4A4D450714C1DB06D8BA8ADC389B (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F_mBA2389E5CFF1CA82E8F9DB601928B8AFA0CAD8C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var obj = Object.Instantiate(_objectToPool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____objectToPool_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// obj.GetComponent<ObstacleMovement>().Construct(_updater, _stateMachine, _gameData, _audioService);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* L_3;
		L_3 = GameObject_GetComponent_TisObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F_mBA2389E5CFF1CA82E8F9DB601928B8AFA0CAD8C0(L_2, GameObject_GetComponent_TisObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F_mBA2389E5CFF1CA82E8F9DB601928B8AFA0CAD8C0_RuntimeMethod_var);
		RuntimeObject* L_4 = __this->____updater_8;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_5 = __this->____stateMachine_9;
		RuntimeObject* L_6 = __this->____gameData_10;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_7 = __this->____audioService_11;
		NullCheck(L_3);
		ObstacleMovement_Construct_m95CB0650402184BE7BFFEDB56C0D1C53D612105E(L_3, L_4, L_5, L_6, L_7, NULL);
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_2;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// return obj;
		return L_8;
	}
}
// System.Void ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m71417FAC6D702860867B1C3413ED349B343ACFFD (ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* __this, const RuntimeMethod* method) 
{
	{
		// private int _amountToPool = 5;
		__this->____amountToPool_5 = 5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.RestartStateGame::.ctor(evstr.Zenject.GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartStateGame__ctor_m7826282E3786E147206FA1BCD75F2E5985D03878 (RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* __this, GameController_t4276871139306213CF41F69A38F723DF69283EA4* ___gameController0, const RuntimeMethod* method) 
{
	{
		// public RestartStateGame(GameController gameController)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _gameController = gameController;
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_0 = ___gameController0;
		__this->____gameController_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.RestartStateGame::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartStateGame_Enter_mB67B96E8CC4B0C79CF83D723F14C20620550BA33 (RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameController.SaveGame();
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_0 = __this->____gameController_0;
		NullCheck(L_0);
		GameController_SaveGame_mDC88AC4CDEF51C450D3DED086C53F158276B2588(L_0, NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void evstr.RestartStateGame::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartStateGame_Exit_m0381511D0E7FF2C49E88DADE1A129BD260F35654 (RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.DisableZone::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableZone_OnCollisionEnter2D_m75CD597C1A021E55B2CC4056BFC3C94ECCA4B628 (DisableZone_tB58E98A73B4B787AC0BA3CE6C011AE741086F99C* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// collision.gameObject.SetActive(false);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void evstr.DisableZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableZone__ctor_m2C9555E6935E6C6A761C5274598F535CCE93979D (DisableZone_tB58E98A73B4B787AC0BA3CE6C011AE741086F99C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.ObstacleSpawner::StartSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner_StartSpawn_m333336B9419408D8CCF1B48624D003605A3EA1C0 (ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spawnPosition = new Vector2();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____spawnPosition_8);
		il2cpp_codegen_initobj(L_0, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// ObjectPool.Instance.InitPool();
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_1 = ((ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_1);
		ObjectPool_InitPool_m896757E9574BDD98BBDC4455F3E9A14518517340(L_1, NULL);
		// StartCoroutine(Spawner());
		RuntimeObject* L_2;
		L_2 = ObstacleSpawner_Spawner_m3C16197B9A10253CBD651CF0469E51B9F37F006E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator evstr.ObstacleSpawner::Spawner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleSpawner_Spawner_m3C16197B9A10253CBD651CF0469E51B9F37F006E (ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* L_0 = (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC*)il2cpp_codegen_object_new(U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnerU3Ed__6__ctor_m686820E18049FD93E28BF1D1BDD06039F12C4364(L_0, 0, NULL);
		U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void evstr.ObstacleSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner__ctor_m8D6A96F8B0B92D490EC705F27D3445F72AAECDB1 (ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* __this, const RuntimeMethod* method) 
{
	{
		// private float _coordinateX = 21.0f;
		__this->____coordinateX_4 = (21.0f);
		// private float _topLimit = -4.0f;
		__this->____topLimit_6 = (-4.0f);
		// private float _botLimit = -7.0f;
		__this->____botLimit_7 = (-7.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.ObstacleSpawner/<Spawner>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnerU3Ed__6__ctor_m686820E18049FD93E28BF1D1BDD06039F12C4364 (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void evstr.ObstacleSpawner/<Spawner>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnerU3Ed__6_System_IDisposable_Dispose_m89DFBB8C30516B933E10F59FF3C51E5C46A62E75 (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean evstr.ObstacleSpawner/<Spawner>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnerU3Ed__6_MoveNext_m1C9B35936EFEFA7047441DF1B2BABFFD4D474A1C (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _coordinateY = Random.Range(_topLimit, _botLimit);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_5 = V_1;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->____topLimit_6;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->____botLimit_7;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_7, L_9, NULL);
		NullCheck(L_5);
		L_5->____coordinateY_5 = L_10;
		// GameObject obstacle = ObjectPool.Instance.GetPooledObject();
		ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082* L_11 = ((ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7FEF06A8B5BAB66D5B574214EAD804D81F126082_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = ObjectPool_GetPooledObject_m82F32DCA94B6336E56B260155F14236D0DB8C59F(L_11, NULL);
		V_2 = L_12;
		// if (obstacle != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_001e;
		}
	}
	{
		// _spawnPosition.x = _coordinateX;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_15 = V_1;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&L_15->____spawnPosition_8);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->____coordinateX_4;
		L_16->___x_0 = L_18;
		// _spawnPosition.y = _coordinateY;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_19 = V_1;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&L_19->____spawnPosition_8);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->____coordinateY_5;
		L_20->___y_1 = L_22;
		// obstacle.transform.position = _spawnPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_25 = V_1;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = L_25->____spawnPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_26, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_27, NULL);
		// obstacle.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object evstr.ObstacleSpawner/<Spawner>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnerU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m646BDBA2C5FDC55018592CA2C879DDE0E0CDFA3A (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void evstr.ObstacleSpawner/<Spawner>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnerU3Ed__6_System_Collections_IEnumerator_Reset_m854FD2237A20EBAD913AEA4B490644D6E32FD346 (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnerU3Ed__6_System_Collections_IEnumerator_Reset_m854FD2237A20EBAD913AEA4B490644D6E32FD346_RuntimeMethod_var)));
	}
}
// System.Object evstr.ObstacleSpawner/<Spawner>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnerU3Ed__6_System_Collections_IEnumerator_get_Current_m3A952A8E6F9C26F632A78665E5057C2A6D3FF1A2 (U3CSpawnerU3Ed__6_t34DB1E1ECF3A77704C4FAA97F5A91A84D9B2D1FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Zenject.GameController::.ctor(evstr.GameConfig.GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mCD8C0A11EC8754BDAD4382034E5ADAED279F1A1C (GameController_t4276871139306213CF41F69A38F723DF69283EA4* __this, GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* ___gameData0, const RuntimeMethod* method) 
{
	{
		// public GameController(GameData gameData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _gameData = gameData;
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_0 = ___gameData0;
		__this->____gameData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.Zenject.GameController::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SaveGame_mDC88AC4CDEF51C450D3DED086C53F158276B2588 (GameController_t4276871139306213CF41F69A38F723DF69283EA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveLoadData.Save(_gameData);
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_0 = __this->____gameData_0;
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		SaveLoadData_Save_mCC0888DB093CB850551F4B186F2D47C497E43AA3(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Zenject.GameInstaller::add_OnUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller_add_OnUpdate_m2A9AAF7FD58BF142760ACAFB2D61A15D8F9ED139 (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnUpdate_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnUpdate_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void evstr.Zenject.GameInstaller::remove_OnUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller_remove_OnUpdate_m4BE9DE6C9FBDD5B907A9509493A8D9AFD0F503DA (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnUpdate_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnUpdate_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void evstr.Zenject.GameInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller_InstallBindings_m8974552066D1A3FD9F4EF61A0197B30989879564 (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcreteBinderGeneric_1_To_TisInputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5_m43E860CC8012EA8677F8F4DDC68D3BB33DE147A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisAudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7_m34239FA73D5394CD07050A8CEC8E769EF163B32C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisGUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916_m1FC0B0F1434B9EEDC8144CF93AB2F4304A5BB301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisGameController_t4276871139306213CF41F69A38F723DF69283EA4_m35962281D698418078543A7B14E6DD11B4C2CF8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisIGameData_t5712DCD902205F7CB05054C98D488864B4629800_m659A4D2DFA2CB153EB0C883175D52EC390748218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisIUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_mAAC3778483C698F2C665AC87AAE48E24346C720A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4_m22610167AB536541A438E4B7C4C96EF8AB133F08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_BindInstance_TisResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434_mE43F708C2C86A92585C1B36A1BDA0C688827A440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisIInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_mC78F19073CF50AD1D808C81B9151F55C1F472D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisStateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A_m4DF1D0EB5ECD625FF86AE74A7A4546211532F7D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_t4276871139306213CF41F69A38F723DF69283EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* V_0 = NULL;
	{
		// GameData gameData = SaveLoadData.Load();
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_0;
		L_0 = SaveLoadData_Load_m5724367D883F31CC6E5954BB66921A4589626281(NULL);
		V_0 = L_0;
		// gameData.TransferDependency(_guiService);
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_1 = V_0;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_2 = __this->____guiService_6;
		NullCheck(L_1);
		GameData_TransferDependency_m5807F5E07560653F31F74DB8E14FDEEEAC7D5596_inline(L_1, L_2, NULL);
		// Container.BindInstance<IGameData>(gameData);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_3;
		L_3 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_4 = V_0;
		NullCheck(L_3);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_5;
		L_5 = DiContainer_BindInstance_TisIGameData_t5712DCD902205F7CB05054C98D488864B4629800_m659A4D2DFA2CB153EB0C883175D52EC390748218(L_3, L_4, DiContainer_BindInstance_TisIGameData_t5712DCD902205F7CB05054C98D488864B4629800_m659A4D2DFA2CB153EB0C883175D52EC390748218_RuntimeMethod_var);
		// Container.BindInstance(_guiService);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_6;
		L_6 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_7 = __this->____guiService_6;
		NullCheck(L_6);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_8;
		L_8 = DiContainer_BindInstance_TisGUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916_m1FC0B0F1434B9EEDC8144CF93AB2F4304A5BB301(L_6, L_7, DiContainer_BindInstance_TisGUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916_m1FC0B0F1434B9EEDC8144CF93AB2F4304A5BB301_RuntimeMethod_var);
		// Container.BindInstance(_obstacleSpawner);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_9;
		L_9 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_10 = __this->____obstacleSpawner_7;
		NullCheck(L_9);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_11;
		L_11 = DiContainer_BindInstance_TisObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4_m22610167AB536541A438E4B7C4C96EF8AB133F08(L_9, L_10, DiContainer_BindInstance_TisObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4_m22610167AB536541A438E4B7C4C96EF8AB133F08_RuntimeMethod_var);
		// Container.BindInstance(_resourceController);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_12;
		L_12 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* L_13 = __this->____resourceController_8;
		NullCheck(L_12);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_14;
		L_14 = DiContainer_BindInstance_TisResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434_mE43F708C2C86A92585C1B36A1BDA0C688827A440(L_12, L_13, DiContainer_BindInstance_TisResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434_mE43F708C2C86A92585C1B36A1BDA0C688827A440_RuntimeMethod_var);
		// Container.BindInstance(_soundManager);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_15;
		L_15 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_16 = __this->____soundManager_9;
		NullCheck(L_15);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_17;
		L_17 = DiContainer_BindInstance_TisAudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7_m34239FA73D5394CD07050A8CEC8E769EF163B32C(L_15, L_16, DiContainer_BindInstance_TisAudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7_m34239FA73D5394CD07050A8CEC8E769EF163B32C_RuntimeMethod_var);
		// Container.BindInstance<IUpdateLoop>(this);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_18;
		L_18 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		NullCheck(L_18);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_19;
		L_19 = DiContainer_BindInstance_TisIUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_mAAC3778483C698F2C665AC87AAE48E24346C720A(L_18, __this, DiContainer_BindInstance_TisIUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_mAAC3778483C698F2C665AC87AAE48E24346C720A_RuntimeMethod_var);
		// Container.Bind<IInputSystem>().To<InputSystemAndroid>().AsSingle();
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_20;
		L_20 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		NullCheck(L_20);
		ConcreteIdBinderGeneric_1_t43ACEDDE3E84B97701B1663B3C506BFA5E6049CB* L_21;
		L_21 = DiContainer_Bind_TisIInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_mC78F19073CF50AD1D808C81B9151F55C1F472D5C(L_20, DiContainer_Bind_TisIInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_mC78F19073CF50AD1D808C81B9151F55C1F472D5C_RuntimeMethod_var);
		NullCheck(L_21);
		FromBinderGeneric_1_t0DE11DE3BCE304E173588A21444941207F115A01* L_22;
		L_22 = ConcreteBinderGeneric_1_To_TisInputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5_m43E860CC8012EA8677F8F4DDC68D3BB33DE147A6(L_21, ConcreteBinderGeneric_1_To_TisInputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5_m43E860CC8012EA8677F8F4DDC68D3BB33DE147A6_RuntimeMethod_var);
		NullCheck(L_22);
		ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48* L_23;
		L_23 = ScopeConcreteIdArgConditionCopyNonLazyBinder_AsSingle_mB57F46824A4D941E55551207E05B4B7319818254(L_22, NULL);
		// _gameController = new GameController(gameData);
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_24 = V_0;
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_25 = (GameController_t4276871139306213CF41F69A38F723DF69283EA4*)il2cpp_codegen_object_new(GameController_t4276871139306213CF41F69A38F723DF69283EA4_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GameController__ctor_mCD8C0A11EC8754BDAD4382034E5ADAED279F1A1C(L_25, L_24, NULL);
		__this->____gameController_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_10), (void*)L_25);
		// Container.BindInstance(_gameController);
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_26;
		L_26 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_27 = __this->____gameController_10;
		NullCheck(L_26);
		IdScopeConcreteIdArgConditionCopyNonLazyBinder_tE39864F32089307526A582FF50AA3DF18DC18670* L_28;
		L_28 = DiContainer_BindInstance_TisGameController_t4276871139306213CF41F69A38F723DF69283EA4_m35962281D698418078543A7B14E6DD11B4C2CF8E(L_26, L_27, DiContainer_BindInstance_TisGameController_t4276871139306213CF41F69A38F723DF69283EA4_m35962281D698418078543A7B14E6DD11B4C2CF8E_RuntimeMethod_var);
		// Container.Bind<StateMachine>().AsSingle();
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_29;
		L_29 = MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline(__this, NULL);
		NullCheck(L_29);
		ConcreteIdBinderGeneric_1_t5D2CF31D0445A91256C95B61FC1817EF2C7136A9* L_30;
		L_30 = DiContainer_Bind_TisStateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A_m4DF1D0EB5ECD625FF86AE74A7A4546211532F7D7(L_29, DiContainer_Bind_TisStateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A_m4DF1D0EB5ECD625FF86AE74A7A4546211532F7D7_RuntimeMethod_var);
		NullCheck(L_30);
		ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48* L_31;
		L_31 = ScopeConcreteIdArgConditionCopyNonLazyBinder_AsSingle_mB57F46824A4D941E55551207E05B4B7319818254(L_30, NULL);
		// }
		return;
	}
}
// System.Void evstr.Zenject.GameInstaller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller_Update_m717CF753DB0AF69186424D1B2E44A6CCCA95DE36 (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// OnUpdate?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnUpdate_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void evstr.Zenject.GameInstaller::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller_OnApplicationQuit_m20DC6C14EDA75A7BD3BBC35C625D855300B7627C (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, const RuntimeMethod* method) 
{
	{
		// _gameController.SaveGame();
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_0 = __this->____gameController_10;
		NullCheck(L_0);
		GameController_SaveGame_mDC88AC4CDEF51C450D3DED086C53F158276B2588(L_0, NULL);
		// }
		return;
	}
}
// System.Void evstr.Zenject.GameInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInstaller__ctor_m98FC0896A5CDEB8F378272DE1B7CE4FCD521B689 (GameInstaller_t9E0828BF928A1782CA37D26EB51F110694EB8675* __this, const RuntimeMethod* method) 
{
	{
		MonoInstaller__ctor_m8D9D340237839C65FC88132719B32970FB7A76BE(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Obstacle.ObstacleMovement::Construct(evstr.Generals.IUpdateLoop,evstr.States.StateMachine,evstr.GameConfig.IGameData,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMovement_Construct_m95CB0650402184BE7BFFEDB56C0D1C53D612105E (ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* __this, RuntimeObject* ___update0, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___stateMachine1, RuntimeObject* ___gameData2, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater = update;
		RuntimeObject* L_0 = ___update0;
		__this->____updater_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____updater_8), (void*)L_0);
		// _obstacleDetecterOne.Construct(stateMachine, audioService);
		ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* L_1 = __this->____obstacleDetecterOne_4;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_2 = ___stateMachine1;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_3 = ___audioService3;
		NullCheck(L_1);
		ObstacleDetecter_Construct_mEB68FC444F2D5FDABB034C3053311CE9B21A0680(L_1, L_2, L_3, NULL);
		// _obstacleDetecterTwo.Construct(stateMachine, audioService);
		ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* L_4 = __this->____obstacleDetecterTwo_5;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_5 = ___stateMachine1;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_6 = ___audioService3;
		NullCheck(L_4);
		ObstacleDetecter_Construct_mEB68FC444F2D5FDABB034C3053311CE9B21A0680(L_4, L_5, L_6, NULL);
		// _scoreZoneDetector.Construct(gameData);
		ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* L_7 = __this->____scoreZoneDetector_6;
		RuntimeObject* L_8 = ___gameData2;
		NullCheck(L_7);
		ScoreZoneDetector_Construct_m3291BCE60D0CEFF6C494374EB4FB20FFBF165793_inline(L_7, L_8, NULL);
		// _updater.OnUpdate += Movement;
		RuntimeObject* L_9 = __this->____updater_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void evstr.Generals.IUpdateLoop::add_OnUpdate(System.Action) */, IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var, L_9, L_10);
		// }
		return;
	}
}
// System.Void evstr.Obstacle.ObstacleMovement::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMovement_OnDestroy_m0AFA22278DED0D5238B3837864CD2210C665D4DB (ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater.OnUpdate -= Movement;
		RuntimeObject* L_0 = __this->____updater_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void evstr.Generals.IUpdateLoop::remove_OnUpdate(System.Action) */, IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void evstr.Obstacle.ObstacleMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMovement_Movement_m14A11B62DC83347EDB4FCDAA1391FCE0E8E44C94 (ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(-_obstacleSpeed * Time.deltaTime, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->____obstacleSpeed_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_0, ((float)il2cpp_codegen_multiply(((-L_1)), L_2)), (0.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void evstr.Obstacle.ObstacleMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMovement__ctor_m43AD3263D15B90FF11320819B35648D71C2D82D5 (ObstacleMovement_t4A46A9816E02311C4988B74D3EDED8CFA0015C8F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.ObjectDetector.ObstacleDetecter::Construct(evstr.States.StateMachine,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleDetecter_Construct_mEB68FC444F2D5FDABB034C3053311CE9B21A0680 (ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* __this, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___stateMachine0, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService1, const RuntimeMethod* method) 
{
	{
		// _stateMachine = stateMachine;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = ___stateMachine0;
		__this->____stateMachine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateMachine_4), (void*)L_0);
		// _audioService = audioService;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_1 = ___audioService1;
		__this->____audioService_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioService_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void evstr.ObjectDetector.ObstacleDetecter::OnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleDetecter_OnCollision_m62C8CDB77F9D463C6B5A2572646D5FB71BCA964C (ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* __this, const RuntimeMethod* method) 
{
	{
		// _stateMachine.EntryState(StateGame.STOP_GAME);
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = __this->____stateMachine_4;
		NullCheck(L_0);
		StateMachine_EntryState_mBBA9D3222F87426F2ABBAE9DB09AEB09016ED82F(L_0, 2, NULL);
		// _audioService.PlayCollisionSound();
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_1 = __this->____audioService_5;
		NullCheck(L_1);
		AudioService_PlayCollisionSound_m2563BDB4C5E509A148AA88974A9B19986EFD6385(L_1, NULL);
		// }
		return;
	}
}
// System.Void evstr.ObjectDetector.ObstacleDetecter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleDetecter__ctor_m346EEECC1D63DD9A41F4E31E283E1B1A47412855 (ObstacleDetecter_tF640AEFFE6D2B2C607525340AD2B593B26CA20ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.ObjectDetector.ScoreZoneDetector::Construct(evstr.GameConfig.IGameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreZoneDetector_Construct_m3291BCE60D0CEFF6C494374EB4FB20FFBF165793 (ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.ObjectDetector.ScoreZoneDetector::OnCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreZoneDetector_OnCollision_m867E11C919959FEDE690AD1A66FF0CBF29C9B9D7 (ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameData.IncreaseScore();
		RuntimeObject* L_0 = __this->____gameData_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void evstr.GameConfig.IGameData::IncreaseScore() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void evstr.ObjectDetector.ScoreZoneDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreZoneDetector__ctor_mB47F51C71846285091FFC25C8B3C617CA31EE219 (ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.States.StartGameState::.ctor(evstr.ObstacleSpawner,evstr.GUI.GUIService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameState__ctor_m4D5324E76A40D2AF3F041421DC1E3B0908F49A6D (StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___obstacleSpawner0, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService1, const RuntimeMethod* method) 
{
	{
		// public StartGameState(ObstacleSpawner obstacleSpawner, GUIService guiService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _obstacleSpawner = obstacleSpawner;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_0 = ___obstacleSpawner0;
		__this->____obstacleSpawner_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obstacleSpawner_0), (void*)L_0);
		// _guiService = guiService;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_1 = ___guiService1;
		__this->____guiService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____guiService_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void evstr.States.StartGameState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameState_Enter_m474FCE8A55F23A5AF922527BA5A91EC6B41D3FFD (StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// _obstacleSpawner.StartSpawn();
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_0 = __this->____obstacleSpawner_0;
		NullCheck(L_0);
		ObstacleSpawner_StartSpawn_m333336B9419408D8CCF1B48624D003605A3EA1C0(L_0, NULL);
		// _guiService.SetVisibilityPanelMainMenu(false);
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_1 = __this->____guiService_1;
		NullCheck(L_1);
		GUIService_SetVisibilityPanelMainMenu_m9108669F079BBC7BAF18303A880F5493B1E505BE(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void evstr.States.StartGameState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameState_Exit_mF630C2C3C90EC995267C4B82D31612DE009D6D3A (StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.States.StateMachine::.ctor(evstr.ObstacleSpawner,evstr.GUI.GUIService,evstr.Zenject.GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mB103A53DDA565E57F2F878B25E670D3347776875 (StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___obstacleSpawner0, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService1, GameController_t4276871139306213CF41F69A38F723DF69283EA4* ___gameController2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StateMachine(ObstacleSpawner obstacleSpawner, GUIService guiService, GameController gameController)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _startGameState = new StartGameState(obstacleSpawner, guiService);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_0 = ___obstacleSpawner0;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_1 = ___guiService1;
		StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* L_2 = (StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77*)il2cpp_codegen_object_new(StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StartGameState__ctor_m4D5324E76A40D2AF3F041421DC1E3B0908F49A6D(L_2, L_0, L_1, NULL);
		__this->____startGameState_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startGameState_0), (void*)L_2);
		// _stopGameState = new StopGameState(obstacleSpawner, guiService);
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_3 = ___obstacleSpawner0;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_4 = ___guiService1;
		StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* L_5 = (StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7*)il2cpp_codegen_object_new(StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StopGameState__ctor_mD967B23BE7F9CA4C7D3BA847C7FF5017FA60828B(L_5, L_3, L_4, NULL);
		__this->____stopGameState_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stopGameState_1), (void*)L_5);
		// _restartState = new RestartStateGame(gameController);
		GameController_t4276871139306213CF41F69A38F723DF69283EA4* L_6 = ___gameController2;
		RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* L_7 = (RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32*)il2cpp_codegen_object_new(RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RestartStateGame__ctor_m7826282E3786E147206FA1BCD75F2E5985D03878(L_7, L_6, NULL);
		__this->____restartState_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restartState_2), (void*)L_7);
		// }
		return;
	}
}
// System.Void evstr.States.StateMachine::EntryState(evstr.States.StateGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_EntryState_mBBA9D3222F87426F2ABBAE9DB09AEB09016ED82F (StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* __this, int32_t ___stateGame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_t822F214CDD779BE0E52AB9452C3B726B0E81AA2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _currentState?.Exit();
		RuntimeObject* L_0 = __this->____currentState_3;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void evstr.States.IState::Exit() */, IState_t822F214CDD779BE0E52AB9452C3B726B0E81AA2F_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		int32_t L_2 = ___stateGame0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0027:
	{
		// _currentState = _startGameState;
		StartGameState_t41DF17574DCAFA6BF2E72DBDA10EF55767CA9F77* L_3 = __this->____startGameState_0;
		__this->____currentState_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_3), (void*)L_3);
		// break;
		goto IL_004f;
	}

IL_0035:
	{
		// _currentState = _stopGameState;
		StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* L_4 = __this->____stopGameState_1;
		__this->____currentState_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_3), (void*)L_4);
		// break;
		goto IL_004f;
	}

IL_0043:
	{
		// _currentState = _restartState;
		RestartStateGame_t7591C11E0F74D34ED09FCDF5985DFAFC90B85B32* L_5 = __this->____restartState_2;
		__this->____currentState_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_3), (void*)L_5);
	}

IL_004f:
	{
		// _currentState.Enter();
		RuntimeObject* L_6 = __this->____currentState_3;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void evstr.States.IState::Enter() */, IState_t822F214CDD779BE0E52AB9452C3B726B0E81AA2F_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.States.StopGameState::.ctor(evstr.ObstacleSpawner,evstr.GUI.GUIService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGameState__ctor_mD967B23BE7F9CA4C7D3BA847C7FF5017FA60828B (StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* __this, ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* ___obstacleSpawner0, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService1, const RuntimeMethod* method) 
{
	{
		// public StopGameState(ObstacleSpawner obstacleSpawner, GUIService guiService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _obstacleSpawner = obstacleSpawner;
		ObstacleSpawner_tBA275157B8719F153C2039AFCA4B4612E60110E4* L_0 = ___obstacleSpawner0;
		__this->____obstacleSpawner_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obstacleSpawner_0), (void*)L_0);
		// _guiService = guiService;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_1 = ___guiService1;
		__this->____guiService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____guiService_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void evstr.States.StopGameState::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGameState_Enter_mE0BF410E5EB9E7F78E6FE58FB0C52740020A288A (StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// _guiService.SetVisibilityPanelGameOver(true);
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_0 = __this->____guiService_1;
		NullCheck(L_0);
		GUIService_SetVisibilityPanelGameOver_mF7AC1E1DAF9B19650A724BF36AFC284A6A1C53A7(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void evstr.States.StopGameState::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGameState_Exit_m66747A7F36CA857C6CC31D817CA7C303257AF9E2 (StopGameState_t91C7FE0E1D58F8900E579AC8185E02CE33547DC7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rigidbody2D evstr.Player.Player::get_GetRigidbody2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Player_get_GetRigidbody2D_mC9A7F4D65C7E8EC93CC0265A0260B1463CE62699 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	{
		// public Rigidbody2D GetRigidbody2D => _rigidbody2D;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody2D_4;
		return L_0;
	}
}
// System.Single evstr.Player.Player::get_ForceFlap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_ForceFlap_mC2AAD39D4CD43144513B6602AB4AC80FF318F826 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	{
		// public float ForceFlap => _forceFlap;
		float L_0 = __this->____forceFlap_8;
		return L_0;
	}
}
// System.Void evstr.Player.Player::Construct(evstr.Generals.IInputSystem,evstr.Audio.AudioService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Construct_mE1330E3F5FB7B77E9869299867CAEDCBB27CE6B6 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, RuntimeObject* ___inputSystem0, AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* ___audioService1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _inputSystem = inputSystem;
		RuntimeObject* L_0 = ___inputSystem0;
		__this->____inputSystem_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputSystem_6), (void*)L_0);
		// _audioService = audioService;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_1 = ___audioService1;
		__this->____audioService_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioService_7), (void*)L_1);
		// _rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody2D_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody2D_4), (void*)L_2);
		// _flapBehaviour = new PlayerBehaviour(this);
		PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61* L_3 = (PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61*)il2cpp_codegen_object_new(PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PlayerBehaviour__ctor_m8DBCB3C0DB5E0BB7A077CC5FB99ED52A926A9D19(L_3, __this, NULL);
		__this->____flapBehaviour_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____flapBehaviour_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void evstr.Player.Player::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnEnable_mDFE0843D291BFA5F4C5B6DE149E9468232BDEDCB (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _inputSystem.OnTapped += _flapBehaviour.Flap;
		RuntimeObject* L_0 = __this->____inputSystem_6;
		RuntimeObject* L_1 = __this->____flapBehaviour_5;
		RuntimeObject* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)GetInterfaceMethodInfo(L_2, 0, IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void evstr.Generals.IInputSystem::add_OnTapped(System.Action) */, IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var, L_0, L_3);
		// _inputSystem.OnTapped += _audioService.PlayFlapSound;
		RuntimeObject* L_4 = __this->____inputSystem_6;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_5 = __this->____audioService_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void evstr.Generals.IInputSystem::add_OnTapped(System.Action) */, IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void evstr.Player.Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m2C261F0A70185790BE65A72DFD76ED1F7BC32D24 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _inputSystem.OnTapped -= _flapBehaviour.Flap;
		RuntimeObject* L_0 = __this->____inputSystem_6;
		RuntimeObject* L_1 = __this->____flapBehaviour_5;
		RuntimeObject* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)GetInterfaceMethodInfo(L_2, 0, IFlap_tE36F00BAFA86A2B7B5E74C549A56C6BDDFF84821_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void evstr.Generals.IInputSystem::remove_OnTapped(System.Action) */, IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var, L_0, L_3);
		// _inputSystem.OnTapped -= _audioService.PlayFlapSound;
		RuntimeObject* L_4 = __this->____inputSystem_6;
		AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* L_5 = __this->____audioService_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void evstr.Generals.IInputSystem::remove_OnTapped(System.Action) */, IInputSystem_t47E0BD3BF02D868061D4C3AF5506EA9FB8BA610B_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void evstr.Player.Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m100F1F749EC219CE6A7DA6FA9FC9305269E98E64 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_m65338136AD8F133419CD707A7040E347499902C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDetector detector = collision.gameObject.GetComponent<IDetector>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisIDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_m65338136AD8F133419CD707A7040E347499902C8(L_1, GameObject_GetComponent_TisIDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_m65338136AD8F133419CD707A7040E347499902C8_RuntimeMethod_var);
		V_0 = L_2;
		// if (detector != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// detector.OnCollision();
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void evstr.ObjectDetector.IDetector::OnCollision() */, IDetector_t670A0A289EC4FB3E289D117CA87B6EADE509DD7B_il2cpp_TypeInfo_var, L_4);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void evstr.Player.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m2462CF58DC7AE2A12C9FBF890CF95AFAAA8E3B54 (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	{
		// private float _forceFlap = 5f;
		__this->____forceFlap_8 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Player.PlayerBehaviour::.ctor(evstr.Player.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehaviour__ctor_m8DBCB3C0DB5E0BB7A077CC5FB99ED52A926A9D19 (PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61* __this, Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* ___player0, const RuntimeMethod* method) 
{
	{
		// public PlayerBehaviour(Player player)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _player = player;
		Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* L_0 = ___player0;
		__this->____player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.Player.PlayerBehaviour::Flap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehaviour_Flap_m9CFC1A40CAA10929EB630CD938AB9E357F4ED073 (PlayerBehaviour_tFD96EB6B7265C5432FF33B8C5836BD3B492CEB61* __this, const RuntimeMethod* method) 
{
	{
		// _player.GetRigidbody2D.velocity = Vector2.up * _player.ForceFlap;
		Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* L_0 = __this->____player_0;
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Player_get_GetRigidbody2D_mC9A7F4D65C7E8EC93CC0265A0260B1463CE62699_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* L_3 = __this->____player_0;
		NullCheck(L_3);
		float L_4;
		L_4 = Player_get_ForceFlap_mC2AAD39D4CD43144513B6602AB4AC80FF318F826_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, L_4, NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_5, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.GUIService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_OnEnable_m50AA42319F746E2ED3A1997F7854C6150D1F7D05 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textScore.text = "0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____textScore_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// }
		return;
	}
}
// System.Void evstr.GUI.GUIService::SetVisibilityPanelGameOver(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_SetVisibilityPanelGameOver_mF7AC1E1DAF9B19650A724BF36AFC284A6A1C53A7 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _panelGameOver.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelGameOver_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.GUIService::SetVisibilityPanelMainMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_SetVisibilityPanelMainMenu_m9108669F079BBC7BAF18303A880F5493B1E505BE (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _panelMainMenu.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelMainMenu_5;
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.GUIService::UpdateTextScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService_UpdateTextScore_mD0BF02B073F914CF1D2BF092EB56854D9D6427F0 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	{
		// _textScore.text = score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____textScore_6;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___score0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void evstr.GUI.GUIService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIService__ctor_m9A6CFC5D401CDA61C47ACF19C19FF3385AC2AAC2 (GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIBackgroundLoop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBackgroundLoop_Start_mBEFD1889B8DA0036296FF940843AFE3A26F14078 (UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->____meshRenderer_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshRenderer_5), (void*)L_0);
		// _meshOffset = _meshRenderer.sharedMaterial.mainTextureOffset;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->____meshRenderer_5;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_1, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439(L_2, NULL);
		__this->____meshOffset_6 = L_3;
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBackgroundLoop::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBackgroundLoop_OnDisable_mEDBF2299077B31885FCEE9DD2AC7D4720101ECBE (UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B* __this, const RuntimeMethod* method) 
{
	{
		// _meshRenderer.sharedMaterial.mainTextureOffset = _meshOffset;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____meshRenderer_5;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->____meshOffset_6;
		NullCheck(L_1);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBackgroundLoop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBackgroundLoop_Update_m4E96E9A2733E5BEC7E2B60A9859166D1897A65A7 (UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var x = Mathf.Repeat(Time.time * _speed, 1);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->____speed_4;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), (1.0f), NULL);
		V_0 = L_2;
		// var offset = new Vector2(x, _meshOffset.y);
		float L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->____meshOffset_6);
		float L_5 = L_4->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_3, L_5, NULL);
		// _meshRenderer.sharedMaterial.mainTextureOffset = offset;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->____meshRenderer_5;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		NullCheck(L_7);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBackgroundLoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBackgroundLoop__ctor_mB7DDD3D6824DB879F02100130A76DE2284456F3C (UIBackgroundLoop_t5F221DDED8C0978192F29A22C9CBDA59118ADE8B* __this, const RuntimeMethod* method) 
{
	{
		// private float _speed = 0.01f;
		__this->____speed_4 = (0.00999999978f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIBaseButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton_Awake_m453D8152EE3BB1E0AD3850226AF56878D96B249F (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->____button_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____button_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBaseButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton_OnEnable_m3D0D206E16914ECE7C9572B1A7BDAAF839F86EFA (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 5)), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBaseButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton_OnDisable_mBE8751FC87A8C0982BF226A9C59860FE203C3F7F (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button.onClick.RemoveListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 5)), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIBaseButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702 (UIBaseButton_t7DE333BCCFF6C6EDE5015E086EB51944284AD728* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIEasyLevelButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton_OnClick_m4215F9C83014FE96C911DACE156BEFA311DC41AB (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) 
{
	{
		// _panleSetting.ChangeActiveButton(0);
		UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* L_0 = __this->____panleSetting_8;
		NullCheck(L_0);
		UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIEasyLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton_Active_m85B308D93CE96E13B076A261B9CA1DC689762B77 (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIEasyLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton_DisActive_mEC9755E06B4431D757456272DCEA71103B82BE31 (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIEasyLevelButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEasyLevelButton__ctor_m9E34222E614634977A963D95C90A1928B896E7B3 (UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIHardLevelButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton_OnClick_m5ACCF4EEA341183E2A455E38AEA1CD9FD671EBDB (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) 
{
	{
		// _panleSetting.ChangeActiveButton(GameDifficulty.HARD);
		UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* L_0 = __this->____panleSetting_8;
		NullCheck(L_0);
		UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIHardLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton_Active_mCC3A3041FA3858DDF48EB246605AF8BD34DA65B6 (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIHardLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton_DisActive_m5E6115087242F44463B529F34E0BA387617286E0 (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIHardLevelButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHardLevelButton__ctor_mE0955DAA5697FCA25F7C188FF954C579B3EF0C35 (UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIMainMenuButton::Construct(evstr.States.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMainMenuButton_Construct_mC7E2B260F0B8467400472891FA3F9E2769B57FB8 (UIMainMenuButton_tE0709A6E98A755F8DFFAEA20FBF321380931AF8B* __this, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___gameController0, const RuntimeMethod* method) 
{
	{
		// _stateMachine = gameController;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = ___gameController0;
		__this->____stateMachine_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateMachine_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIMainMenuButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMainMenuButton_OnClick_m7AD71EE7C209476EE6C65CAF415FAC93091824D8 (UIMainMenuButton_tE0709A6E98A755F8DFFAEA20FBF321380931AF8B* __this, const RuntimeMethod* method) 
{
	{
		// _stateMachine.EntryState(StateGame.RESTART_GAME);
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = __this->____stateMachine_5;
		NullCheck(L_0);
		StateMachine_EntryState_mBBA9D3222F87426F2ABBAE9DB09AEB09016ED82F(L_0, 3, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIMainMenuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMainMenuButton__ctor_m1D4B1B99F909DE895A1520CB411E388AD80E5DA2 (UIMainMenuButton_tE0709A6E98A755F8DFFAEA20FBF321380931AF8B* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIMediumLevelButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton_OnClick_m9EA05786EEDBB47BA639168120DD535E8A3BBC0F (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) 
{
	{
		// _panleSetting.ChangeActiveButton(GameDifficulty.NORMAL);
		UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* L_0 = __this->____panleSetting_7;
		NullCheck(L_0);
		UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIMediumLevelButton::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton_Active_m2AF3B18D66C9134B4646A27A07CD9E1C822830D8 (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIMediumLevelButton::DisActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton_DisActive_mCE4ECC57E711A6DDE0352E6FF0197CB0C4F9DCC5 (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) 
{
	{
		// _imageActive.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____imageActive_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIMediumLevelButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMediumLevelButton__ctor_m5041071A33B9F80CA3A64CA4A8E7E2297A8C4F21 (UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIPanelSettings::Construct(evstr.GameConfig.IGameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelSettings_Construct_m28CA6541B9E43E835DF0209F47136B06FE35C80E (UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIPanelSettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelSettings_OnEnable_m53AEEBC4D921F124D064AE105F6C940B61AA82B4 (UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeActiveButton(_gameData.GameDifficulty);
		RuntimeObject* L_0 = __this->____gameData_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* evstr.GameConfig.GameDifficulty evstr.GameConfig.IGameData::get_GameDifficulty() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_0);
		UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIPanelSettings::ChangeActiveButton(evstr.GameConfig.GameDifficulty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelSettings_ChangeActiveButton_mEE7A99D4386FF8DB601A960119FA1E3EA7E4164B (UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* __this, int32_t ___gameDifficulty0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___gameDifficulty0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// _easyLevelButton.Active();
		UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* L_1 = __this->____easyLevelButton_4;
		NullCheck(L_1);
		UIEasyLevelButton_Active_m85B308D93CE96E13B076A261B9CA1DC689762B77(L_1, NULL);
		// _mediumLevelButton.DisActive();
		UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* L_2 = __this->____mediumLevelButton_5;
		NullCheck(L_2);
		UIMediumLevelButton_DisActive_mCE4ECC57E711A6DDE0352E6FF0197CB0C4F9DCC5(L_2, NULL);
		// _hardLevelButton.DisActive();
		UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* L_3 = __this->____hardLevelButton_6;
		NullCheck(L_3);
		UIHardLevelButton_DisActive_m5E6115087242F44463B529F34E0BA387617286E0(L_3, NULL);
		// _gameData.GameDifficulty = GameDifficulty.EASY;
		RuntimeObject* L_4 = __this->____gameData_7;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void evstr.GameConfig.IGameData::set_GameDifficulty(evstr.GameConfig.GameDifficulty) */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_4, 0);
		// break;
		return;
	}

IL_0041:
	{
		// _easyLevelButton.DisActive();
		UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* L_5 = __this->____easyLevelButton_4;
		NullCheck(L_5);
		UIEasyLevelButton_DisActive_mEC9755E06B4431D757456272DCEA71103B82BE31(L_5, NULL);
		// _mediumLevelButton.Active();
		UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* L_6 = __this->____mediumLevelButton_5;
		NullCheck(L_6);
		UIMediumLevelButton_Active_m2AF3B18D66C9134B4646A27A07CD9E1C822830D8(L_6, NULL);
		// _hardLevelButton.DisActive();
		UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* L_7 = __this->____hardLevelButton_6;
		NullCheck(L_7);
		UIHardLevelButton_DisActive_m5E6115087242F44463B529F34E0BA387617286E0(L_7, NULL);
		// _gameData.GameDifficulty = GameDifficulty.NORMAL;
		RuntimeObject* L_8 = __this->____gameData_7;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void evstr.GameConfig.IGameData::set_GameDifficulty(evstr.GameConfig.GameDifficulty) */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_8, 1);
		// break;
		return;
	}

IL_006f:
	{
		// _easyLevelButton.DisActive();
		UIEasyLevelButton_tD1D2DC801C61E9086F21F1A2C035503B654B939F* L_9 = __this->____easyLevelButton_4;
		NullCheck(L_9);
		UIEasyLevelButton_DisActive_mEC9755E06B4431D757456272DCEA71103B82BE31(L_9, NULL);
		// _mediumLevelButton.DisActive();
		UIMediumLevelButton_t40730865FA83AFC576F26E47484F61316549D86E* L_10 = __this->____mediumLevelButton_5;
		NullCheck(L_10);
		UIMediumLevelButton_DisActive_mCE4ECC57E711A6DDE0352E6FF0197CB0C4F9DCC5(L_10, NULL);
		// _hardLevelButton.Active();
		UIHardLevelButton_tCE341B84C1288D95E65C43189CF0409E7407606F* L_11 = __this->____hardLevelButton_6;
		NullCheck(L_11);
		UIHardLevelButton_Active_mCC3A3041FA3858DDF48EB246605AF8BD34DA65B6(L_11, NULL);
		// _gameData.GameDifficulty = GameDifficulty.HARD;
		RuntimeObject* L_12 = __this->____gameData_7;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void evstr.GameConfig.IGameData::set_GameDifficulty(evstr.GameConfig.GameDifficulty) */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_12, 2);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIPanelSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelSettings__ctor_m00C3AEBD017D178DE49F835BDF3BF78C01750113 (UIPanelSettings_t02096681D38082D9F936D3370109F52BD8634F48* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UISoundToggle::Construct(evstr.GameConfig.IGameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISoundToggle_Construct_mACCCBCE6A729D172763CC7F30D9DB6B6D651A648 (UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GUI.UISoundToggle::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISoundToggle_OnClick_m4F7F2119BE4F1ABA6B03859E89C8766D47F62DD9 (UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_gameData.AudioStatus)
		RuntimeObject* L_0 = __this->____gameData_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean evstr.GameConfig.IGameData::get_AudioStatus() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// _checkmark.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____checkmark_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// _gameData.AudioStatus = false;
		RuntimeObject* L_3 = __this->____gameData_5;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void evstr.GameConfig.IGameData::set_AudioStatus(System.Boolean) */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_3, (bool)0);
		// AudioListener.volume = 0;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((0.0f), NULL);
		return;
	}

IL_0030:
	{
		// _checkmark.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____checkmark_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// _gameData.AudioStatus = true;
		RuntimeObject* L_5 = __this->____gameData_5;
		NullCheck(L_5);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void evstr.GameConfig.IGameData::set_AudioStatus(System.Boolean) */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_5, (bool)1);
		// AudioListener.volume = 1;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((1.0f), NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UISoundToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISoundToggle_OnEnable_m2331220BE548E95EF77B260F32FC9E1E103A5BA3 (UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UIBaseButton_OnEnable_m3D0D206E16914ECE7C9572B1A7BDAAF839F86EFA(__this, NULL);
		// if (_gameData.AudioStatus)
		RuntimeObject* L_0 = __this->____gameData_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean evstr.GameConfig.IGameData::get_AudioStatus() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// _checkmark.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____checkmark_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		return;
	}

IL_0020:
	{
		// _checkmark.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____checkmark_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UISoundToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISoundToggle__ctor_m80A6323DDE13C797DB10995F08D9C2CBFB16D51A (UISoundToggle_tF193A077BA4F3A5B0F29DDB948430F628416B59F* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GUI.UIStartButton::Construct(evstr.States.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStartButton_Construct_m678CAB204B7E0EC937CDA07287176EE04E7D0CC9 (UIStartButton_t57D69C6092D5A3C4D5F9502E9CFB30862D42F702* __this, StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* ___gameController0, const RuntimeMethod* method) 
{
	{
		// _gameController = gameController;
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = ___gameController0;
		__this->____gameController_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIStartButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStartButton_OnClick_m9BEA7F8F9D77800C32DD5BD23AE3F990A54DA769 (UIStartButton_t57D69C6092D5A3C4D5F9502E9CFB30862D42F702* __this, const RuntimeMethod* method) 
{
	{
		// _gameController.EntryState(StateGame.START_GAME);
		StateMachine_t9003596C6F97ACA3A050A17EC5DA3E6F2AA7717A* L_0 = __this->____gameController_5;
		NullCheck(L_0);
		StateMachine_EntryState_mBBA9D3222F87426F2ABBAE9DB09AEB09016ED82F(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void evstr.GUI.UIStartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStartButton__ctor_mACB430502832ACE351EA8509E6A6B73FB4E99B89 (UIStartButton_t57D69C6092D5A3C4D5F9502E9CFB30862D42F702* __this, const RuntimeMethod* method) 
{
	{
		UIBaseButton__ctor_m16D17C79A22849B7E80554C16B36859543C6D702(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Generals.InputSystemAndroid::add_OnTapped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_add_OnTapped_mB08FF25D03120BD736EAB7280AFA0CCD0D361709 (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnTapped_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnTapped_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::remove_OnTapped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_remove_OnTapped_mC6E67510BFCC20CC4F5B23DF369BB5C22EEC8067 (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnTapped_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnTapped_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::Construct(evstr.Generals.IUpdateLoop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_Construct_mE6263C862FB15D15FA35915F71D16EA17A192787 (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, RuntimeObject* ___update0, const RuntimeMethod* method) 
{
	{
		// _updater = update;
		RuntimeObject* L_0 = ___update0;
		__this->____updater_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____updater_1), (void*)L_0);
		// OnEnable();
		InputSystemAndroid_OnEnable_m7A77FF0BB8F3E433947B3F456D3969261289218D(__this, NULL);
		// }
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_OnEnable_m7A77FF0BB8F3E433947B3F456D3969261289218D (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater.OnUpdate += Update;
		RuntimeObject* L_0 = __this->____updater_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void evstr.Generals.IUpdateLoop::add_OnUpdate(System.Action) */, IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_OnDisable_mA55ED672D0F68B4369D7A9BD852491147F93D88F (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater.OnUpdate -= Update;
		RuntimeObject* L_0 = __this->____updater_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void evstr.Generals.IUpdateLoop::remove_OnUpdate(System.Action) */, IUpdateLoop_t07E847BEB716A45F783A5210B6644781E16EDEF9_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid_Update_mCE6EF850A6527442D5CC74E9E2304DC1F55DEAFE (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// OnTapped?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnTapped_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void evstr.Generals.InputSystemAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemAndroid__ctor_m0345603DDB4034DF981ECF1FD478BE8E8526B772 (InputSystemAndroid_tB449D7906E72F881B32968FF9C7CA90D551597C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Generals.ResourceController::Counstruct(evstr.GameConfig.IGameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceController_Counstruct_m36F49CE22988A4B687B163661CDA14D584394413 (ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_7), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject evstr.Generals.ResourceController::GetObstaclePrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourceController_GetObstaclePrefab_m3D8611CE6BC306C50A9015A54293A0771BFA5845 (ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch(_gameData.GameDifficulty)
		RuntimeObject* L_0 = __this->____gameData_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* evstr.GameConfig.GameDifficulty evstr.GameConfig.IGameData::get_GameDifficulty() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0035;
	}

IL_0020:
	{
		// return _easyObstaclePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____easyObstaclePrefab_4;
		return L_3;
	}

IL_0027:
	{
		// return _mediumObstaclePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____mediumObstaclePrefab_5;
		return L_4;
	}

IL_002e:
	{
		// return _hardObstaclePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____hardObstaclePrefab_6;
		return L_5;
	}

IL_0035:
	{
		// return _hardObstaclePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____hardObstaclePrefab_6;
		return L_6;
	}
}
// System.Void evstr.Generals.ResourceController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceController__ctor_m26636E566DBE0896EA14B0730DDB1816C81D99E5 (ResourceController_t3828F99AAC471874251F1FC6E9242F80DC051434* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 evstr.GameConfig.GameData::get_GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_GetScore_m06D57EF6C7A86E72F75D25FE620EA794778CB3D1 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) 
{
	{
		// get => _score;
		int32_t L_0 = __this->____score_0;
		return L_0;
	}
}
// System.Boolean evstr.GameConfig.GameData::get_AudioStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameData_get_AudioStatus_mA32348D080F15429B93BD73FD98083C885C90B44 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) 
{
	{
		// get => _audioStatus;
		bool L_0 = __this->____audioStatus_1;
		return L_0;
	}
}
// System.Void evstr.GameConfig.GameData::set_AudioStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_AudioStatus_mAB90090AD4153F6DC1596BB17E5BE4F78BACC9CF (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => _audioStatus = value;
		bool L_0 = ___value0;
		__this->____audioStatus_1 = L_0;
		return;
	}
}
// evstr.GameConfig.GameDifficulty evstr.GameConfig.GameData::get_GameDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_get_GameDifficulty_m0AA43319AF742E343D52AD259B18DC223CFB3285 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) 
{
	{
		// get => _gameDifficulty;
		int32_t L_0 = __this->____gameDifficulty_2;
		return L_0;
	}
}
// System.Void evstr.GameConfig.GameData::set_GameDifficulty(evstr.GameConfig.GameDifficulty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_set_GameDifficulty_m5833E5BBE0CA83D9923F091811999A7E137AA8D0 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _gameDifficulty = value;
		int32_t L_0 = ___value0;
		__this->____gameDifficulty_2 = L_0;
		return;
	}
}
// System.Void evstr.GameConfig.GameData::TransferDependency(evstr.GUI.GUIService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_TransferDependency_m5807F5E07560653F31F74DB8E14FDEEEAC7D5596 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService0, const RuntimeMethod* method) 
{
	{
		// _guiService = guiService;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_0 = ___guiService0;
		__this->____guiService_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____guiService_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.GameConfig.GameData::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_IncreaseScore_m8223DF50B772AE9AC3B03C9C08B05819483DB5B8 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) 
{
	{
		// _score += 1;
		int32_t L_0 = __this->____score_0;
		__this->____score_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// _guiService.UpdateTextScore(_score);
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_1 = __this->____guiService_3;
		int32_t L_2 = __this->____score_0;
		NullCheck(L_1);
		GUIService_UpdateTextScore_mD0BF02B073F914CF1D2BF092EB56854D9D6427F0(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void evstr.GameConfig.GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_m7E2AD3400BADC3A01AE5C0A47D1E20BA0AE02599 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.GameConfig.SaveLoadData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData__cctor_m5B190DFB8C403FEC7B9DAA3DE41B9E37C9AAA432 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D15682C5102ED8DD50714F5AA65CD6318C8057);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SavePath = Application.persistentDataPath + "gamedata.dat";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralF9D15682C5102ED8DD50714F5AA65CD6318C8057, NULL);
		((SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var))->___SavePath_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var))->___SavePath_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void evstr.GameConfig.SaveLoadData::Save(evstr.GameConfig.GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_Save_mCC0888DB093CB850551F4B186F2D47C497E43AA3 (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* ___gameData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_0 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_0, NULL);
		V_0 = L_0;
		// using (FileStream fileStream = new FileStream(SavePath, FileMode.OpenOrCreate))
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		String_t* L_1 = ((SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var))->___SavePath_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_2, L_1, 4, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0025;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// formatter.Serialize(fileStream, gameData);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_5 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_1;
			GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_7 = ___gameData0;
			NullCheck(L_5);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_5, L_6, L_7, NULL);
			// }
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// }
		return;
	}
}
// evstr.GameConfig.GameData evstr.GameConfig.SaveLoadData::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* SaveLoadData_Load_m5724367D883F31CC6E5954BB66921A4589626281 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_0 = NULL;
	GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	{
		// if (!IsLoad())
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SaveLoadData_IsLoad_m372193311D809A2F9409A19A6EA5FEBAD40EC679(NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return new GameData();
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_1 = (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87*)il2cpp_codegen_object_new(GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameData__ctor_m7E2AD3400BADC3A01AE5C0A47D1E20BA0AE02599(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_2 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_2, NULL);
		V_0 = L_2;
		// GameData gameData = null;
		V_1 = (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87*)NULL;
		// using (FileStream fileStream = new FileStream(SavePath, FileMode.Open))
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		String_t* L_3 = ((SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var))->___SavePath_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_4, L_3, 3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0039;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// gameData = (GameData)formatter.Deserialize(fileStream);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_7 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
			NullCheck(L_7);
			RuntimeObject* L_9;
			L_9 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_7, L_8, NULL);
			V_1 = ((GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87*)CastclassClass((RuntimeObject*)L_9, GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87_il2cpp_TypeInfo_var));
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// return gameData;
		GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* L_10 = V_1;
		return L_10;
	}
}
// System.Boolean evstr.GameConfig.SaveLoadData::IsLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SaveLoadData_IsLoad_m372193311D809A2F9409A19A6EA5FEBAD40EC679 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return File.Exists(SavePath);
		il2cpp_codegen_runtime_class_init_inline(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoadData_t87DB114ACC9639F278865E22F81240ED3C56AA77_il2cpp_TypeInfo_var))->___SavePath_0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void evstr.Audio.AudioService::Construct(evstr.GameConfig.IGameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService_Construct_mE7CE412E99E58AC0E8080B8DDF7CBB845568ED2B (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void evstr.Audio.AudioService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService_Start_m4987A78684589E6CD3E188FA50AB96ECD31C6C51 (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_4), (void*)L_0);
		// if (_gameData.AudioStatus)
		RuntimeObject* L_1 = __this->____gameData_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean evstr.GameConfig.IGameData::get_AudioStatus() */, IGameData_t5712DCD902205F7CB05054C98D488864B4629800_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// AudioListener.volume = 1;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((1.0f), NULL);
		return;
	}

IL_0024:
	{
		// AudioListener.volume = 0;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((0.0f), NULL);
		// }
		return;
	}
}
// System.Void evstr.Audio.AudioService::PlayFlapSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService_PlayFlapSound_m24B8A2D6BF0B3579FF1432BC18F3EB31DAEEA0C6 (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, const RuntimeMethod* method) 
{
	{
		// _flapSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____flapSource_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void evstr.Audio.AudioService::PlayCollisionSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService_PlayCollisionSound_m2563BDB4C5E509A148AA88974A9B19986EFD6385 (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, const RuntimeMethod* method) 
{
	{
		// _collisionSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____collisionSource_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void evstr.Audio.AudioService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioService__ctor_mF11EDC8D64D5233DE50CBD537F28D3456115DEFE (AudioService_t167D72F6D19F816A27446B11ACF921E9D1DA9CE7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameData_TransferDependency_m5807F5E07560653F31F74DB8E14FDEEEAC7D5596_inline (GameData_t471E6A9F6C3EBD6D38CEF65F6B16931027023D87* __this, GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* ___guiService0, const RuntimeMethod* method) 
{
	{
		// _guiService = guiService;
		GUIService_tC429AA6DE2EDBA5AEAB3CFFD25D60E7D97271916* L_0 = ___guiService0;
		__this->____guiService_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____guiService_3), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* MonoInstallerBase_get_Container_m00C0CB9CB241D936A83D58C64A58863C2129EA14_inline (MonoInstallerBase_t5F01FAD5A0192687900E2E3818B8412BC27BCED4* __this, const RuntimeMethod* method) 
{
	{
		// get; set;
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0 = __this->___U3CContainerU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreZoneDetector_Construct_m3291BCE60D0CEFF6C494374EB4FB20FFBF165793_inline (ScoreZoneDetector_tAF33349B4A1EDC7670C47B0B274ABDA690C5C151* __this, RuntimeObject* ___gameData0, const RuntimeMethod* method) 
{
	{
		// _gameData = gameData;
		RuntimeObject* L_0 = ___gameData0;
		__this->____gameData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameData_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Player_get_GetRigidbody2D_mC9A7F4D65C7E8EC93CC0265A0260B1463CE62699_inline (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	{
		// public Rigidbody2D GetRigidbody2D => _rigidbody2D;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody2D_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_ForceFlap_mC2AAD39D4CD43144513B6602AB4AC80FF318F826_inline (Player_t2D1B5CF658802DB8165B87846C8D35E9A6DD1568* __this, const RuntimeMethod* method) 
{
	{
		// public float ForceFlap => _forceFlap;
		float L_0 = __this->____forceFlap_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
