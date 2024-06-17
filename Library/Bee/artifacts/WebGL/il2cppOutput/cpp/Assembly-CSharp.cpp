#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
struct AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486;
struct BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
struct CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601;
struct DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A;
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
struct ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF;
struct U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5ED89873147A6A28D351F2464389DD4EFDF4DB3876C94C09462B6622E4CC6627_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C2484D8D9F0AEB6A8F2C301500B8F1109D131D46CA89B5089BAE55CD9ADE9F7F_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral081001B533C852CA2FADA6ACEFB6215530F37D83;
IL2CPP_EXTERN_C String_t* _stringLiteral120C43247E21B6CE1B75636B7AFBFFFF56418513;
IL2CPP_EXTERN_C String_t* _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4453E9AE91CECDD41DF8E080A091C71ACE6F9500;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3951DCBF9E3F204142F85DAC87C6265A5BB473;
IL2CPP_EXTERN_C String_t* _stringLiteral52B810B012F4C40AE9935BD76EB1A37795894D44;
IL2CPP_EXTERN_C String_t* _stringLiteral5981C29F3637D9560300650EC9F045C495B7D47B;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8E7A397CF0AE9CD057218157E1CAE971C35DF2;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral71285C906E2CF90C832B5765B0F91B3D9203B517;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE387AE87BE8F42AC6C772AF1DF5F036913B23D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9336BE8FD293C816DFF4539D6730EEA8E99225;
IL2CPP_EXTERN_C String_t* _stringLiteral82B4843B955D9B5ED0C33A10A693D60B45CAB0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral862C3E693371559FF1418455EDB88A956BA46A80;
IL2CPP_EXTERN_C String_t* _stringLiteral87967AC0E9A4997FF480F492B19E59B990C559A6;
IL2CPP_EXTERN_C String_t* _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437;
IL2CPP_EXTERN_C String_t* _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral948CAE165E053FEE797D2E91A1678ECF3CF02EA4;
IL2CPP_EXTERN_C String_t* _stringLiteral97158752BAF2032B5E58F1B5E8C2284E9EF00682;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B5E11EC3C5655BFAE423D764C785AB8761448A;
IL2CPP_EXTERN_C String_t* _stringLiteralACC16BD6175CA0A0228DB1822370C75A907CC577;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralBC0B9DAF69508686CEEE64BFAA608D361728DEEB;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC35D8938744FA106FC39048C00E24E730F5645;
IL2CPP_EXTERN_C String_t* _stringLiteralC374EDC3E92DD6E082D671934184D432AC97FD68;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4C2EEF8766CABB379EE172A89593F0D9A0D1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75;
IL2CPP_EXTERN_C String_t* _stringLiteralE18044B8B947F5B124682EBE52BE2E13C5E422D8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_m18720A555FC6A050CCD144559DC24C2DD39FDB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4_m02D8A1F6BB4ECB2BE01561A30B001DA77CBC7E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38_mC03CC94986519F81192EB2619B1206B4ACECDC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m2940241A954390D7F98892868E94AB370C13EF25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetAudioListenerU3Ed__2_System_Collections_IEnumerator_Reset_m360A536B5495E76B2DFFD5861DB0B376B31A1FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeSentenceU3Ed__7_System_Collections_IEnumerator_Reset_m18747D0AD88A2A3BC164D021AB85735DADABBFBF_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* ___U3CU3E4__this;
};
struct U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	String_t* ___sentence;
	DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* ___U3CU3E4__this;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	Il2CppChar ___U3CletterU3E5__3;
};
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	int32_t ___m_Name;
	int32_t ___m_Path;
	int32_t ___m_FullPath;
	float ___m_NormalizedTime;
	float ___m_Length;
	float ___m_Speed;
	float ___m_SpeedMultiplier;
	int32_t ___m_Tag;
	int32_t ___m_Loop;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D189_t181BF9E84850A73E672DC844BD205F268C9F8136 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D189_t181BF9E84850A73E672DC844BD205F268C9F8136__padding[189];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D318_t65FFD809482B76CA15C3FA8E0533D854C9C22AE8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D318_t65FFD809482B76CA15C3FA8E0533D854C9C22AE8__padding[318];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD 
{
	int32_t ___m_ColliderID;
	int32_t ___m_OtherColliderID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPoints;
	uint16_t ___m_Flags;
	uint16_t ___m_Events;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ImpulseSum;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___m_Header;
	ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD ___m_Pair;
	bool ___m_Flipped;
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___audioListener;
};
struct BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___speed;
	float ___rotationSpeed;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationAxis;
	int32_t ___sign;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb;
};
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target;
};
struct CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___modelTransform;
	float ___speed;
	float ___runningSpeed;
	float ___jumpSpeed;
	float ___climbingSpeed;
	int32_t ___maxHealth;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ladderBottomMask;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ladderTopMask;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftFoot;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightFoot;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___headTop;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabEagle;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabSOL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabBurger;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabGlock;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabMinigun;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiKeyPanel;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHand;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiKeyPrefab;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb;
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___capsuleCollider;
	float ___xOrientation;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask;
	bool ___IsInLadder;
	bool ___IsTopLadder;
	bool ___IsBottomLadder;
	bool ___canDoubleJump;
	bool ___hasDoubleJumped;
	int32_t ___currentHealth;
	bool ___hasKey1;
};
struct DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dialogueText;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialoguePanel;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___sentences;
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ___sentenceQueue;
};
struct DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myDoor;
	bool ___openTrigger;
};
struct IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* ___characterAnimationScript;
};
struct MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___points;
	float ___speed;
	int32_t ___currentPoint;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData;
	String_t* ___m_Text;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout;
	bool ___m_DisableFontTextureRebuiltCallback;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts;
};
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D189_t181BF9E84850A73E672DC844BD205F268C9F8136 ___5ED89873147A6A28D351F2464389DD4EFDF4DB3876C94C09462B6622E4CC6627;
	__StaticArrayInitTypeSizeU3D318_t65FFD809482B76CA15C3FA8E0533D854C9C22AE8 ___C2484D8D9F0AEB6A8F2C301500B8F1109D131D46CA89B5089BAE55CD9ADE9F7F;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ElementAt_TisRuntimeObject_mC51F008F04886AD65463E3166E3BFAB665994771_gshared (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

inline AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* Component_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_m18720A555FC6A050CCD144559DC24C2DD39FDB0B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioListenerReset_ResetAudioListener_m82538C8DC9F122C7DCC7800C8CC360E20678979A (AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetAudioListenerU3Ed__2__ctor_m142C512996DCA19CAE10ED5111C67AD93F593C0B (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* GameObject_GetComponent_TisCharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38_mC03CC94986519F81192EB2619B1206B4ACECDC62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_gotoNextPoint_m015F15F8D6EB08C2B5774DA83AAA2E83775526EA (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingPlatformScript_getTarget_mAC7FA18DF1CE96BADDC742CE34D78E2BCD880FCB (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingPlatformScript_getCurrent_m1E7C32874AF512FCE9A7AAC9B5931ADCA702A048 (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_layerNames, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_Jump_m3F3BCFE252C41E1C17C1C1A0055A16E0773BA34B (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_DoubleJump_mF99AF4EFF7CFE6706983068F68413E525ACC5F3B (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_CheckTriggers_mDA7F340B60C42CE629218573B411EA070CE40956 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, bool ___1_active, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_MoveKeyToUI_m5627917AD6594BD71E2A1A5D454F0DAC01931F10 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_openDoor_m1EA30193C4F3079710F484DCA2EAC0FF8B7C07FC (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_doorTouched, const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8 (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_mC51F008F04886AD65463E3166E3BFAB665994771_gshared)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
inline BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* GameObject_GetComponent_TisBaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4_m02D8A1F6BB4ECB2BE01561A30B001DA77CBC7E7A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaldEagle_Init_m65CD4166BD4C23B2A10D110FCF0C5E755A42EA73 (BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* __this, float ___0_sign, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_JumpEvent_m5C6324CC3BA9037AD67D06BA77A1EE74CA094D27 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_ThrowAxeEvent_m0B8A2409E2798D3EFFF5011CDA197C6503E21916 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) ;
inline void Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_StartDialogue_m0ADE8C907B4FDBC0C00933BDFBED14BC68A7F2DF (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) ;
inline void Queue_1_Clear_m2940241A954390D7F98892868E94AB370C13EF25 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
inline void Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_DisplayNextSentence_m3A5906724C46042AF129B82214DAA897E14C82DB (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) ;
inline int32_t Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_EndDialogue_m2F7D0017952B8035A14F403EC6C5348F6E9EBB13 (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) ;
inline String_t* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueScript_TypeSentence_mE77720FF8336E1DB44D8DE10AED31629E0DDF93E (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, String_t* ___0_sentence, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__7__ctor_mDC2B68DCC7D43BD1EB2E9D0E8CEF0F861124AFC6 (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListenerReset_Start_mF6D0C5F47A22CAC47ABE33774D230DC9E4D5338B (AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_m18720A555FC6A050CCD144559DC24C2DD39FDB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_0;
		L_0 = Component_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_m18720A555FC6A050CCD144559DC24C2DD39FDB0B(__this, Component_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_m18720A555FC6A050CCD144559DC24C2DD39FDB0B_RuntimeMethod_var);
		__this->___audioListener = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioListener), (void*)L_0);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_1 = __this->___audioListener;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = AudioListenerReset_ResetAudioListener_m82538C8DC9F122C7DCC7800C8CC360E20678979A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioListenerReset_ResetAudioListener_m82538C8DC9F122C7DCC7800C8CC360E20678979A (AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* L_0 = (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF*)il2cpp_codegen_object_new(U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF_il2cpp_TypeInfo_var);
		U3CResetAudioListenerU3Ed__2__ctor_m142C512996DCA19CAE10ED5111C67AD93F593C0B(L_0, 0, NULL);
		U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* L_1 = L_0;
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListenerReset__ctor_mAE5DBD491F13E0B8A589E2AF11391008C6575F55 (AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetAudioListenerU3Ed__2__ctor_m142C512996DCA19CAE10ED5111C67AD93F593C0B (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetAudioListenerU3Ed__2_System_IDisposable_Dispose_mAC3372E2B9B1778DAF9B979B9991C79F27A70F31 (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetAudioListenerU3Ed__2_MoveNext_m6F83DA88960AC42649F8F2066D2369F2FD872EF1 (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_003f;
	}

IL_001f:
	{
		goto IL_006c;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state = (-1);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_2 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_2, NULL);
		__this->___U3CU3E2__current = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_2);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state = (-1);
		AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* L_3 = __this->___U3CU3E4__this;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_4 = L_3->___audioListener;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_5 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_5, NULL);
		__this->___U3CU3E2__current = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_5);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_006c:
	{
		__this->___U3CU3E1__state = (-1);
		AudioListenerReset_tFA29C09D8953820D8DE1F4CDE0871DF6FE63B486* L_6 = __this->___U3CU3E4__this;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_7 = L_6->___audioListener;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetAudioListenerU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3EA181C94137142C81CF5FA424ECEBAB0AF560F (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetAudioListenerU3Ed__2_System_Collections_IEnumerator_Reset_m360A536B5495E76B2DFFD5861DB0B376B31A1FF2 (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetAudioListenerU3Ed__2_System_Collections_IEnumerator_Reset_m360A536B5495E76B2DFFD5861DB0B376B31A1FF2_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetAudioListenerU3Ed__2_System_Collections_IEnumerator_get_Current_m31B021B899AF89C5300AFABF5215E140D5B5888C (U3CResetAudioListenerU3Ed__2_tA699656C743B78211582680ED3E80824E4B905CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaldEagle_Start_mB36752F8F498861C7C52CA64D7345E169543D88E (BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb), (void*)L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaldEagle_Init_m65CD4166BD4C23B2A10D110FCF0C5E755A42EA73 (BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* __this, float ___0_sign, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_sign;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		__this->___sign = (-1);
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaldEagle_Update_mD61C415C89FA1D4239FBA31412D65A6C6579B249 (BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_1 = __this->___speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		int32_t L_3 = __this->___sign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, ((float)L_3), NULL);
		V_0 = L_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		float L_10 = L_9.___y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_11, NULL);
		float L_13 = L_12.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_7, L_10, L_13, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaldEagle__ctor_m756F4CC05075196EE1A94879F852F45F1D2E0867 (BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___rotationAxis = L_0;
		__this->___sign = 1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Start_mA5B7202B365DD49486C67738FBD1EC84D104BE33 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Update_mDAE6380A029D3E301E4432169484CCE2E881E873 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_FixedUpdate_m2A46914D11B6048DB3995E7C8C44BC80C76C1330 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_add(L_5, (20.0f))), (-200.0f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, (0.100000001f), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript__ctor_mDCE666CE7EF072645A59FD192F310106688922B2 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_OnTriggerEnter_mC070CC0CC7DA2B0C569737B4559D27912D96C2BB (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38_mC03CC94986519F81192EB2619B1206B4ACECDC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4C2EEF8766CABB379EE172A89593F0D9A0D1F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		V_1 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* L_6;
		L_6 = GameObject_GetComponent_TisCharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38_mC03CC94986519F81192EB2619B1206B4ACECDC62(L_5, GameObject_GetComponent_TisCharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38_mC03CC94986519F81192EB2619B1206B4ACECDC62_RuntimeMethod_var);
		V_2 = L_6;
		CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* L_7 = V_2;
		bool L_8 = L_7->___hasKey1;
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		bool L_10 = __this->___openTrigger;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___myDoor;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralDF4C2EEF8766CABB379EE172A89593F0D9A0D1F6, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController__ctor_mD89F4B49FFD160724C7040A3E91E96951CEC5BF3 (DoorController_tF2F99340EB03FDC2F2F1CDC7C67770C13D62849A* __this, const RuntimeMethod* method) 
{
	{
		__this->___myDoor = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myDoor), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		__this->___openTrigger = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroGCScript_Start_mFC1802E048E68FAF6237C807FAE8B30E86409E96 (IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroGCScript_Update_m72F23433A51EF7086E8140D07CD9187E21C3AF04 (IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroGCScript_OnStartClicked_mAE2692DEC265B41F6D2210AD83829952F831FF72 (IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroGCScript__ctor_mDFA4982F20D323AC2A9343775C842D2A490C33F5 (IntroGCScript_t01C9E4A1FE562A46460FB5B5FD98F97966DEC48B* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_Start_mB1640CF57BEC263A0A1E37FC29C3CBA62768C87F (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb), (void*)L_0);
		__this->___currentPoint = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___points;
		int32_t L_3 = __this->___currentPoint;
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		MovingPlatformScript_gotoNextPoint_m015F15F8D6EB08C2B5774DA83AAA2E83775526EA(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_gotoNextPoint_m015F15F8D6EB08C2B5774DA83AAA2E83775526EA (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = MovingPlatformScript_getTarget_mAC7FA18DF1CE96BADDC742CE34D78E2BCD880FCB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = MovingPlatformScript_getCurrent_m1E7C32874AF512FCE9A7AAC9B5931ADCA702A048(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_4 = __this->___speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		__this->___v = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_Update_mC892D003A3199B833ABA6D53389E1DB2157E8FEE (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___v;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___player;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___v;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_16, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_17, NULL);
	}

IL_0066:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = MovingPlatformScript_getTarget_mAC7FA18DF1CE96BADDC742CE34D78E2BCD880FCB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_20, NULL);
		V_2 = L_21;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_1 = (bool)((((float)L_22) < ((float)(0.400000006f)))? 1 : 0);
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___currentPoint;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = __this->___points;
		__this->___currentPoint = ((int32_t)(((int32_t)il2cpp_codegen_add(L_24, 1))%((int32_t)(((RuntimeArray*)L_25)->max_length))));
		MovingPlatformScript_gotoNextPoint_m015F15F8D6EB08C2B5774DA83AAA2E83775526EA(__this, NULL);
	}

IL_00af:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingPlatformScript_getTarget_mAC7FA18DF1CE96BADDC742CE34D78E2BCD880FCB (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___points;
		int32_t L_1 = __this->___currentPoint;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___points;
		int32_t L_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 1))%((int32_t)(((RuntimeArray*)L_2)->max_length))));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingPlatformScript_getCurrent_m1E7C32874AF512FCE9A7AAC9B5931ADCA702A048 (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___points;
		int32_t L_1 = __this->___currentPoint;
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_OnCollisionEnter_m032198EBD0F5C87EFEAFAAB8D7BD1EC05DC35B10 (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		__this->___player = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player), (void*)L_5);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript_OnCollisionExit_m9078F7531D87D48BC98136DAA1CF70F382CCDE9B (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		__this->___player = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatformScript__ctor_m9C490E2312CE16FA58F358D280796B7E1C784868 (MovingPlatformScript_t30C2F7F4ED147714467B03384635B0C0D75FBE66* __this, const RuntimeMethod* method) 
{
	{
		__this->___currentPoint = 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_Start_mCFAFD44F6183E3985F617CBF8BD392C667F2A6FE (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACC16BD6175CA0A0228DB1822370C75A907CC577);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC374EDC3E92DD6E082D671934184D432AC97FD68);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___maxHealth;
		__this->___currentHealth = L_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb), (void*)L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		int32_t L_4;
		L_4 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_3, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		__this->___groundMask = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralACC16BD6175CA0A0228DB1822370C75A907CC577);
		int32_t L_8;
		L_8 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_7, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9;
		L_9 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_8, NULL);
		__this->___ladderBottomMask = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC374EDC3E92DD6E082D671934184D432AC97FD68);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_13;
		L_13 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_12, NULL);
		__this->___ladderTopMask = L_13;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14;
		L_14 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___capsuleCollider = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___capsuleCollider), (void*)L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_Update_m98D74F1A184074D55514A8FCC722D9B17CC7B0DD (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4453E9AE91CECDD41DF8E080A091C71ACE6F9500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A3951DCBF9E3F204142F85DAC87C6265A5BB473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B810B012F4C40AE9935BD76EB1A37795894D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B4843B955D9B5ED0C33A10A693D60B45CAB0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral862C3E693371559FF1418455EDB88A956BA46A80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87967AC0E9A4997FF480F492B19E59B990C559A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97158752BAF2032B5E58F1B5E8C2284E9EF00682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0B9DAF69508686CEEE64BFAA608D361728DEEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	String_t* G_B25_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B25_1 = NULL;
	String_t* G_B24_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B24_1 = NULL;
	int32_t G_B26_0 = 0;
	String_t* G_B26_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B26_2 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B28_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B27_0 = NULL;
	float G_B29_0 = 0.0f;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B29_1 = NULL;
	int32_t G_B32_0 = 0;
	int32_t G_B40_0 = 0;
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_1), _stringLiteral862C3E693371559FF1418455EDB88A956BA46A80, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_013e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___modelTransform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_10;
		L_10 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12 = __this->___climbingSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_15, NULL);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_7, L_16, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___animator;
		float L_18;
		L_18 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		float L_20;
		L_20 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_21;
		L_21 = fabsf(L_20);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, _stringLiteral4A3951DCBF9E3F204142F85DAC87C6265A5BB473, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_19, L_21)), (0.00100000005f))), NULL);
		float L_22;
		L_22 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((((float)L_22) > ((float)(0.0f))))
		{
			goto IL_00d1;
		}
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_23 = __this->___ladderBottomMask;
		G_B4_0 = L_23;
		goto IL_00d7;
	}

IL_00d1:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_24 = __this->___ladderTopMask;
		G_B4_0 = L_24;
	}

IL_00d7:
	{
		V_2 = G_B4_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___rightFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_27 = V_2;
		int32_t L_28;
		L_28 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_26, (0.100000001f), L_28, NULL);
		if (L_29)
		{
			goto IL_0112;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___leftFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_32 = V_2;
		int32_t L_33;
		L_33 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_31, (0.100000001f), L_33, NULL);
		G_B7_0 = ((int32_t)(L_34));
		goto IL_0113;
	}

IL_0112:
	{
		G_B7_0 = 1;
	}

IL_0113:
	{
		V_3 = (bool)G_B7_0;
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_0138;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = __this->___rb;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_36, (bool)0, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___animator;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_37, _stringLiteral52B810B012F4C40AE9935BD76EB1A37795894D44, (bool)0, NULL);
	}

IL_0138:
	{
		goto IL_03d2;
	}

IL_013e:
	{
		float L_38;
		L_38 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_0160;
		}
	}
	{
		bool L_39 = __this->___IsInLadder;
		if (!L_39)
		{
			goto IL_0160;
		}
	}
	{
		bool L_40 = __this->___IsBottomLadder;
		if (L_40)
		{
			goto IL_0184;
		}
	}

IL_0160:
	{
		float L_41;
		L_41 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		bool L_42 = __this->___IsInLadder;
		if (!L_42)
		{
			goto IL_0181;
		}
	}
	{
		bool L_43 = __this->___IsTopLadder;
		G_B17_0 = ((int32_t)(L_43));
		goto IL_0182;
	}

IL_0181:
	{
		G_B17_0 = 0;
	}

IL_0182:
	{
		G_B19_0 = G_B17_0;
		goto IL_0185;
	}

IL_0184:
	{
		G_B19_0 = 1;
	}

IL_0185:
	{
		V_9 = (bool)G_B19_0;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_01ac;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_45 = __this->___rb;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_45, (bool)1, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->___animator;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_46, _stringLiteral52B810B012F4C40AE9935BD76EB1A37795894D44, (bool)1, NULL);
	}

IL_01ac:
	{
		float L_47;
		L_47 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_4 = L_47;
		float L_48 = V_4;
		V_10 = (bool)((((int32_t)((((float)L_48) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_01d5;
		}
	}
	{
		float L_50 = V_4;
		__this->___xOrientation = ((-L_50));
	}

IL_01d5:
	{
		bool L_51;
		L_51 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, NULL);
		V_5 = L_51;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_52 = __this->___animator;
		bool L_53 = V_5;
		if (!L_53)
		{
			G_B25_0 = _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA;
			G_B25_1 = L_52;
			goto IL_01fe;
		}
		G_B24_0 = _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA;
		G_B24_1 = L_52;
	}
	{
		float L_54 = V_4;
		G_B26_0 = ((((int32_t)((((float)L_54) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_01ff:
	{
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(G_B26_2, G_B26_1, (bool)G_B26_0, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_55 = __this->___animator;
		float L_56 = V_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_55, _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9, (bool)((((int32_t)((((float)L_56) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___modelTransform;
		float L_58 = __this->___xOrientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(L_58, (90.0f))), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_57, L_59, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_60 = __this->___rb;
		bool L_61 = V_5;
		if (L_61)
		{
			G_B28_0 = L_60;
			goto IL_025b;
		}
		G_B27_0 = L_60;
	}
	{
		float L_62 = __this->___speed;
		G_B29_0 = L_62;
		G_B29_1 = G_B27_0;
		goto IL_0261;
	}

IL_025b:
	{
		float L_63 = __this->___runningSpeed;
		G_B29_0 = L_63;
		G_B29_1 = G_B28_0;
	}

IL_0261:
	{
		float L_64 = V_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_65 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_65, NULL);
		float L_67 = L_66.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_multiply(G_B29_0, L_64)), L_67, (0.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(G_B29_1, L_68, NULL);
		bool L_69;
		L_69 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		V_6 = L_69;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___leftFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_72 = __this->___groundMask;
		int32_t L_73;
		L_73 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_72, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_71, (2.0f), L_73, NULL);
		if (L_74)
		{
			goto IL_02d4;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = __this->___rightFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_75, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_77 = __this->___groundMask;
		int32_t L_78;
		L_78 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_77, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_76, (2.0f), L_78, NULL);
		G_B32_0 = ((int32_t)(L_79));
		goto IL_02d5;
	}

IL_02d4:
	{
		G_B32_0 = 1;
	}

IL_02d5:
	{
		V_7 = (bool)G_B32_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_80 = __this->___animator;
		bool L_81 = V_7;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_80, _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75, L_81, NULL);
		bool L_82 = V_7;
		V_11 = L_82;
		bool L_83 = V_11;
		if (!L_83)
		{
			goto IL_0302;
		}
	}
	{
		__this->___canDoubleJump = (bool)1;
		__this->___hasDoubleJumped = (bool)0;
	}

IL_0302:
	{
		bool L_84 = V_6;
		V_12 = L_84;
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0342;
		}
	}
	{
		bool L_86 = V_7;
		V_13 = L_86;
		bool L_87 = V_13;
		if (!L_87)
		{
			goto IL_031e;
		}
	}
	{
		CharacterAnimationScript_Jump_m3F3BCFE252C41E1C17C1C1A0055A16E0773BA34B(__this, NULL);
		goto IL_0341;
	}

IL_031e:
	{
		bool L_88 = __this->___canDoubleJump;
		if (!L_88)
		{
			goto IL_0331;
		}
	}
	{
		bool L_89 = __this->___hasDoubleJumped;
		G_B40_0 = ((((int32_t)L_89) == ((int32_t)0))? 1 : 0);
		goto IL_0332;
	}

IL_0331:
	{
		G_B40_0 = 0;
	}

IL_0332:
	{
		V_14 = (bool)G_B40_0;
		bool L_90 = V_14;
		if (!L_90)
		{
			goto IL_0341;
		}
	}
	{
		CharacterAnimationScript_DoubleJump_mF99AF4EFF7CFE6706983068F68413E525ACC5F3B(__this, NULL);
	}

IL_0341:
	{
	}

IL_0342:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_91 = __this->___animator;
		bool L_92 = V_7;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_91, _stringLiteral87967AC0E9A4997FF480F492B19E59B990C559A6, (bool)((((int32_t)L_92) == ((int32_t)0))? 1 : 0), NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_93 = __this->___animator;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_94 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_94, NULL);
		float L_96 = L_95.___y;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_93, _stringLiteral4453E9AE91CECDD41DF8E080A091C71ACE6F9500, L_96, NULL);
		bool L_97;
		L_97 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		V_8 = L_97;
		bool L_98 = V_8;
		V_15 = L_98;
		bool L_99 = V_15;
		if (!L_99)
		{
			goto IL_03a0;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_100 = __this->___animator;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_100, _stringLiteral97158752BAF2032B5E58F1B5E8C2284E9EF00682, NULL);
	}

IL_03a0:
	{
		bool L_101 = V_7;
		V_16 = L_101;
		bool L_102 = V_16;
		if (!L_102)
		{
			goto IL_03d1;
		}
	}
	{
		bool L_103;
		L_103 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralBC0B9DAF69508686CEEE64BFAA608D361728DEEB, NULL);
		V_17 = L_103;
		bool L_104 = V_17;
		V_18 = L_104;
		bool L_105 = V_18;
		if (!L_105)
		{
			goto IL_03d0;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_106 = __this->___animator;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_106, _stringLiteral82B4843B955D9B5ED0C33A10A693D60B45CAB0AA, NULL);
	}

IL_03d0:
	{
	}

IL_03d1:
	{
	}

IL_03d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_OnTriggerEnter_mEA143ED654BFF87F885BA632E646E991AFC55A50 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		CharacterAnimationScript_CheckTriggers_mDA7F340B60C42CE629218573B411EA070CE40956(__this, L_0, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_OnTriggerExit_m93E0472D2FD72ABC56E1BA5A46911C95A0A8634F (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		CharacterAnimationScript_CheckTriggers_mDA7F340B60C42CE629218573B411EA070CE40956(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_CheckTriggers_mDA7F340B60C42CE629218573B411EA070CE40956 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, bool ___1_active, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral120C43247E21B6CE1B75636B7AFBFFFF56418513);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E8E7A397CF0AE9CD057218157E1CAE971C35DF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18044B8B947F5B124682EBE52BE2E13C5E422D8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralE18044B8B947F5B124682EBE52BE2E13C5E422D8, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		bool L_3 = ___1_active;
		__this->___IsInLadder = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, _stringLiteral5E8E7A397CF0AE9CD057218157E1CAE971C35DF2, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		bool L_9 = ___1_active;
		__this->___IsTopLadder = L_9;
		goto IL_005e;
	}

IL_003c:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_12, _stringLiteral120C43247E21B6CE1B75636B7AFBFFFF56418513, NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		bool L_15 = ___1_active;
		__this->___IsBottomLadder = L_15;
	}

IL_005e:
	{
		goto IL_00c2;
	}

IL_0061:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = ___0_other;
		bool L_17;
		L_17 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_16, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19 = ___0_other;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_19, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_20, (bool)0, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = ___0_other;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_22;
		L_22 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_21, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_22, (bool)0, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		CharacterAnimationScript_MoveKeyToUI_m5627917AD6594BD71E2A1A5D454F0DAC01931F10(__this, L_24, NULL);
		__this->___hasKey1 = (bool)1;
		goto IL_00c2;
	}

IL_00a2:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25 = ___0_other;
		bool L_26;
		L_26 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_25, _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437, NULL);
		V_4 = L_26;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_00c2;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		CharacterAnimationScript_openDoor_m1EA30193C4F3079710F484DCA2EAC0FF8B7C07FC(__this, L_29, NULL);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_openDoor_m1EA30193C4F3079710F484DCA2EAC0FF8B7C07FC (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_doorTouched, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_MoveKeyToUI_m5627917AD6594BD71E2A1A5D454F0DAC01931F10 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiKeyPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___uiKeyPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_Jump_m3F3BCFE252C41E1C17C1C1A0055A16E0773BA34B (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___x;
		float L_4 = __this->___jumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, L_4, (0.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_5, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_DoubleJump_mF99AF4EFF7CFE6706983068F68413E525ACC5F3B (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71285C906E2CF90C832B5765B0F91B3D9203B517);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral71285C906E2CF90C832B5765B0F91B3D9203B517, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___x;
		float L_4 = __this->___jumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, ((float)il2cpp_codegen_multiply(L_4, (2.0f))), (0.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_5, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521, NULL);
		__this->___hasDoubleJumped = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_ThrowAxeEvent_m0B8A2409E2798D3EFFF5011CDA197C6503E21916 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4_m02D8A1F6BB4ECB2BE01561A30B001DA77CBC7E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B5E11EC3C5655BFAE423D764C785AB8761448A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	int32_t V_1 = 0;
	BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* V_2 = NULL;
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___prefabEagle;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_1, L_2, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___prefabSOL;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___prefabGlock;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___prefabBurger;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_8, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___prefabMinigun;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_10, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_11, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = V_0;
		int32_t L_13;
		L_13 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_12, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_11, 0, L_13);
		V_1 = L_14;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = V_0;
		int32_t L_16 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8(L_15, L_16, Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___rightHand;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = V_0;
		int32_t L_23 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8(L_22, L_23, Enumerable_ElementAt_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m9DE19C91549F4DD1F2A73E400C77A569508DDFD8_RuntimeMethod_var);
		BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* L_25;
		L_25 = GameObject_GetComponent_TisBaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4_m02D8A1F6BB4ECB2BE01561A30B001DA77CBC7E7A(L_24, GameObject_GetComponent_TisBaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4_m02D8A1F6BB4ECB2BE01561A30B001DA77CBC7E7A_RuntimeMethod_var);
		V_2 = L_25;
		float* L_26 = (float*)(&__this->___xOrientation);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1B5E11EC3C5655BFAE423D764C785AB8761448A, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_28, NULL);
		BaldEagle_tAD5207BEC5C9FBDA1A3642A946423AF1CE8406F4* L_29 = V_2;
		float L_30 = __this->___xOrientation;
		BaldEagle_Init_m65CD4166BD4C23B2A10D110FCF0C5E755A42EA73(L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_FixedUpdate_m08E5A9F871C8C79CC3F2FBD2A031E0DD929B7C8B (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	{
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___capsuleCollider;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___headTop;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___rightFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___leftFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, L_9, NULL);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_0, ((float)il2cpp_codegen_subtract(L_3, L_10)), NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_11 = __this->___capsuleCollider;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___headTop;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___rightFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___leftFoot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y;
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_17, L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.100000001f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_14, L_21)))), L_24)), (0.0f), NULL);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_11, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript_JumpEvent_m5C6324CC3BA9037AD67D06BA77A1EE74CA094D27 (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___x;
		float L_4 = __this->___jumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, L_4, (0.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationScript__ctor_mAC76EAA59039C0C234F7CF4DE5223CD0B095594D (CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* __this, const RuntimeMethod* method) 
{
	{
		__this->___speed = (0.0f);
		__this->___runningSpeed = (0.0f);
		__this->___jumpSpeed = (0.0f);
		__this->___maxHealth = ((int32_t)100);
		__this->___xOrientation = (1.0f);
		__this->___IsInLadder = (bool)0;
		__this->___IsTopLadder = (bool)0;
		__this->___IsBottomLadder = (bool)0;
		__this->___canDoubleJump = (bool)0;
		__this->___hasDoubleJumped = (bool)0;
		__this->___hasKey1 = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelScript_Start_m7E374431DC5F5961E16A33A217EF4A567940B076 (ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelScript_Update_m39A9DE28D2276484CCD851139B78D76089529A8F (ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelScript_JumpEvent_m964284A2CB5A6CC1CA4DCD63C3626A3578FF83B5 (ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA* __this, const RuntimeMethod* method) 
{
	{
		CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* L_0 = __this->___characterAnimationScript;
		CharacterAnimationScript_JumpEvent_m5C6324CC3BA9037AD67D06BA77A1EE74CA094D27(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelScript_ThrowAxeEvent_mB552D2069864DD89823617ECD29EC8A1BD25A4EA (ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA* __this, const RuntimeMethod* method) 
{
	{
		CharacterAnimationScript_tCF15BE53B241C3FE6244468A6BDC01BE4BDE9C38* L_0 = __this->___characterAnimationScript;
		CharacterAnimationScript_ThrowAxeEvent_m0B8A2409E2798D3EFFF5011CDA197C6503E21916(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelScript__ctor_m8421B69DA8485EF28E446D7D758F9FD625DB19D5 (ModelScript_t524DC8F6C5D57F22AE61F3BD6A306A670F2EBFAA* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_Start_mD04F0B318FF1610F46F8D21200364F5964C932DA (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral081001B533C852CA2FADA6ACEFB6215530F37D83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5981C29F3637D9560300650EC9F045C495B7D47B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EE387AE87BE8F42AC6C772AF1DF5F036913B23D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F9336BE8FD293C816DFF4539D6730EEA8E99225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral948CAE165E053FEE797D2E91A1678ECF3CF02EA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC35D8938744FA106FC39048C00E24E730F5645);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_0 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_0, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		__this->___sentenceQueue = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sentenceQueue), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___sentences;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___sentences;
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___sentences = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sentences), (void*)L_4);
	}

IL_0033:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___sentences;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral081001B533C852CA2FADA6ACEFB6215530F37D83);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___sentences;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBCC35D8938744FA106FC39048C00E24E730F5645);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___sentences;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7EE387AE87BE8F42AC6C772AF1DF5F036913B23D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->___sentences;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral948CAE165E053FEE797D2E91A1678ECF3CF02EA4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___sentences;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7F9336BE8FD293C816DFF4539D6730EEA8E99225);
		V_1 = 0;
		goto IL_009c;
	}

IL_0078:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___sentences;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral5981C29F3637D9560300650EC9F045C495B7D47B, L_12, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_009c:
	{
		int32_t L_19 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___sentences;
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0078;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___dialoguePanel;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		DialogueScript_StartDialogue_m0ADE8C907B4FDBC0C00933BDFBED14BC68A7F2DF(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_StartDialogue_m0ADE8C907B4FDBC0C00933BDFBED14BC68A7F2DF (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m2940241A954390D7F98892868E94AB370C13EF25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dialoguePanel;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_1 = __this->___sentenceQueue;
		Queue_1_Clear_m2940241A954390D7F98892868E94AB370C13EF25(L_1, Queue_1_Clear_m2940241A954390D7F98892868E94AB370C13EF25_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___sentences;
		V_0 = L_2;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_7 = __this->___sentenceQueue;
		String_t* L_8 = V_2;
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_7, L_8, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		DialogueScript_DisplayNextSentence_m3A5906724C46042AF129B82214DAA897E14C82DB(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_DisplayNextSentence_m3A5906724C46042AF129B82214DAA897E14C82DB (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_0 = __this->___sentenceQueue;
		int32_t L_1;
		L_1 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_0, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		DialogueScript_EndDialogue_m2F7D0017952B8035A14F403EC6C5348F6E9EBB13(__this, NULL);
		goto IL_003e;
	}

IL_001d:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_3 = __this->___sentenceQueue;
		String_t* L_4;
		L_4 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_3, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		V_0 = L_4;
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		String_t* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = DialogueScript_TypeSentence_mE77720FF8336E1DB44D8DE10AED31629E0DDF93E(__this, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_003e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueScript_TypeSentence_mE77720FF8336E1DB44D8DE10AED31629E0DDF93E (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, String_t* ___0_sentence, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* L_0 = (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658*)il2cpp_codegen_object_new(U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658_il2cpp_TypeInfo_var);
		U3CTypeSentenceU3Ed__7__ctor_mDC2B68DCC7D43BD1EB2E9D0E8CEF0F861124AFC6(L_0, 0, NULL);
		U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* L_1 = L_0;
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* L_2 = L_1;
		String_t* L_3 = ___0_sentence;
		L_2->___sentence = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sentence), (void*)L_3);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript_EndDialogue_m2F7D0017952B8035A14F403EC6C5348F6E9EBB13 (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dialoguePanel;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueScript__ctor_m59E997F3BEE98BED0963E96A022FE356F5ACFF11 (DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__7__ctor_mDC2B68DCC7D43BD1EB2E9D0E8CEF0F861124AFC6 (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__7_System_IDisposable_Dispose_mE8FAEBC422DFEB7C2E3AA8472D016E9DF3B1E048 (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeSentenceU3Ed__7_MoveNext_m1C79BBE2E5CA1312A0CA4BF7B3197A5C3381225E (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00a8;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state = (-1);
		DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* L_3 = __this->___U3CU3E4__this;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___dialogueText;
		VirtualActionInvoker1< String_t* >::Invoke(75, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_5 = __this->___sentence;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_5, NULL);
		__this->___U3CU3Es__1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_6);
		__this->___U3CU3Es__2 = 0;
		goto IL_00be;
	}

IL_0054:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->___U3CU3Es__1;
		int32_t L_8 = __this->___U3CU3Es__2;
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CletterU3E5__3 = L_10;
		DialogueScript_tE4FD22FAE5549D019DA9F2A31D0386CB2D3DB601* L_11 = __this->___U3CU3E4__this;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___dialogueText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(74, L_13);
		Il2CppChar* L_15 = (Il2CppChar*)(&__this->___U3CletterU3E5__3);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_16, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75, L_13, L_17);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, (0.0500000007f), NULL);
		__this->___U3CU3E2__current = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_18);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_19 = __this->___U3CU3Es__2;
		__this->___U3CU3Es__2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00be:
	{
		int32_t L_20 = __this->___U3CU3Es__2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->___U3CU3Es__1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		__this->___U3CU3Es__1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3934597B367754C2DF3EE4E4AC50C2FECD8C1D6 (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__7_System_Collections_IEnumerator_Reset_m18747D0AD88A2A3BC164D021AB85735DADABBFBF (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeSentenceU3Ed__7_System_Collections_IEnumerator_Reset_m18747D0AD88A2A3BC164D021AB85735DADABBFBF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__7_System_Collections_IEnumerator_get_Current_mAA425A2048A6F6DA7E5262924E4FFD0BB8E106A3 (U3CTypeSentenceU3Ed__7_tAFC87549F9A5086CBFBAA792BA8C6944CB6A4658* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5ED89873147A6A28D351F2464389DD4EFDF4DB3876C94C09462B6622E4CC6627_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C2484D8D9F0AEB6A8F2C301500B8F1109D131D46CA89B5089BAE55CD9ADE9F7F_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)318));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C2484D8D9F0AEB6A8F2C301500B8F1109D131D46CA89B5089BAE55CD9ADE9F7F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)189));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5ED89873147A6A28D351F2464389DD4EFDF4DB3876C94C09462B6622E4CC6627_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)9);
		(&V_0)->___TotalTypes = ((int32_t)9);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		V_1 = L_6;
		goto IL_005f;
	}

IL_005f:
	{
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
