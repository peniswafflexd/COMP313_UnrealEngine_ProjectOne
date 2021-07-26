// Fill out your copyright notice in the Description page of Project Settings.

#include "VectorBetween2Vectors.h"


FString UVectorBetween2Vectors::MyTester()
{
	return FString("wobble");
}

FVector UVectorBetween2Vectors::VectorBetweenTwoVectors(FVector startVec, FVector endVec, float distanceFromStart)
{
	FVector length = endVec - startVec;
	length.Normalize(0.01f);
	FVector distance = length * distanceFromStart;
	FVector returnVec = distance + startVec;
	return returnVec;
}
