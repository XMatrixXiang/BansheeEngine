#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "Wrappers/BsScriptResource.h"
#include "../../../bsf/Source/Foundation/bsfCore/Audio/BsAudioClip.h"
#include "../../../bsf/Source/Foundation/bsfCore/Audio/BsAudioClip.h"

namespace bs
{
	class AudioClip;

	class BS_SCR_BE_EXPORT ScriptAudioClip : public TScriptResource<ScriptAudioClip, AudioClip>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "AudioClip")

		ScriptAudioClip(MonoObject* managedInstance, const ResourceHandle<AudioClip>& value);

		static MonoObject* createInstance();

	private:
		static MonoObject* Internal_getRef(ScriptAudioClip* thisPtr);

		static uint32_t Internal_getBitDepth(ScriptAudioClip* thisPtr);
		static uint32_t Internal_getFrequency(ScriptAudioClip* thisPtr);
		static uint32_t Internal_getNumChannels(ScriptAudioClip* thisPtr);
		static AudioFormat Internal_getFormat(ScriptAudioClip* thisPtr);
		static AudioReadMode Internal_getReadMode(ScriptAudioClip* thisPtr);
		static float Internal_getLength(ScriptAudioClip* thisPtr);
		static uint32_t Internal_getNumSamples(ScriptAudioClip* thisPtr);
		static bool Internal_is3D(ScriptAudioClip* thisPtr);
	};
}