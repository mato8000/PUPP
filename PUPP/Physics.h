#pragma once

#include "pch.h"
#include "PxPhysicsAPI.h"

class Physics {
	physx::PxDefaultAllocator defaultAllocator;
	physx::PxDefaultErrorCallback defaultErrorCallback;

public:
	physx::PxFoundation* foundation;
	physx::PxPhysics* physics;
	physx::PxDefaultCpuDispatcher* dispatcher;
	physx::PxScene* scene;

	physx::PxPvd* pvd;

	Physics();
	virtual ~Physics();

	void Init();
	void Cleanup();
};