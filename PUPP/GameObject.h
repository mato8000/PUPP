#pragma once

#include "pch.h"

class GameObject {
public:
	physx::PxRigidActor* rigidActor;
	std::unique_ptr<DirectX::GeometricPrimitive>* shape;

	virtual ~GameObject() = default;

	void Draw(DirectX::CXMMATRIX view, DirectX::CXMMATRIX proj);
};

