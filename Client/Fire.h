#pragma once
#include "myGameObject.h"
#include "myResourceManager.h"
#include "myTransform.h"
#include "myInput.h"
#include "myImage.h"
#include "myCollider.h"
#include "myAnimator.h"

namespace my
{
	class Fire : public GameObject
	{
	public:
		Fire();
		~Fire();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

		void onCollisionEnter(Collider* other);
		void onCollisionStay(Collider* other);
		void onCollisionExit(Collider* other);

		void setR(int r) { R = r; }

	private:
		Vector2 bulletPos;
		Vector2 EnemyPos;

		int R;
		float mTime;
		float effect_Time;
		float bullet_vel;
		Image* fire_Image;

		Animator* Ax_Animator;

		Vector2 dir;
		Vector2 rotation;
	};
}
