#pragma once

#include "pch.h"

inline DirectX::SimpleMath::Matrix ConvertMatrix(const physx::PxMat44& mat) {
	DirectX::SimpleMath::Matrix ret;
	memcpy(ret.m, mat.front(), sizeof(float) * 16);
	return ret;
}

inline DirectX::SimpleMath::Vector3 ConvertVector(const physx::PxVec3& vec) {
	return DirectX::SimpleMath::Vector3(vec.x, vec.y, -vec.z);
}