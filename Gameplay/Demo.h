#pragma once
#include "../src/Core/GameLayer.h"
#include "../src/Platforms/OpenGL/GLMasterRenderer.h"
#include "../src/Renderer/DebugUI.h"
#include "../src/Components/Entity.h"
#include "../src/Components/AudioSource.h"
namespace Lava
{
	namespace Demo
	{
		class DemoGameLayer : public GameLayer
		{
		public:
			void Start() override;
			void Update() override;
		private:
			DebugUI* debug_ui;
			std::vector<Entity*>* entities;
			bool onStartExecuted;
			glm::vec3 particle_move_pos_temp;
			OpenGL::GLParticleRenderer* particle_renderer;
			OpenGL::GLWaterRenderer* gl_water_renderer;
			Camera* camera;
			Light* light;
			AudioSource* audio_source;
			ParticleSystem* particle_system;
			Transform* water_transform;
		};
	}
}