#pragma once
#include "Skillmanager.h"

namespace my
{
	class Ax2 : public SkillManager
	{
	public:
		Ax2();
		~Ax2();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;
	};
}
