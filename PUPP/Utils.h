#pragma once

#include "pch.h"

DirectX::SimpleMath::Matrix ConvertMatrix(const physx::PxMat44& mat) {
	DirectX::SimpleMath::Matrix ret;
	memcpy(ret.m, mat.front(), sizeof(float) * 16);
	return ret;
}

DirectX::SimpleMath::Vector3 ConvertVector(const physx::PxVec3& vec) {
	return DirectX::SimpleMath::Vector3(vec.x, vec.y, -vec.z);
}