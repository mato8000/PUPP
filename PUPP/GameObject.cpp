#include "pch.h"

#include "GameObject.h"
#include "Utils.h"

using namespace DirectX;
using namespace SimpleMath;
using namespace physx;

void GameObject::Draw(CXMMATRIX view, CXMMATRIX proj) {
	PxMat44 pxWorld(rigidActor->getGlobalPose());
	Matrix world = ConvertMatrix(pxWorld) * Matrix::CreateScale(1, 1, -1);
	(*shape)->Draw(world, view, proj);
}
