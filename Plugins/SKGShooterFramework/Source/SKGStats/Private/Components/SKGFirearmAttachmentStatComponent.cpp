﻿// Copyright 2023, Dakota Dawe, All rights reserved


#include "Components/SKGFirearmAttachmentStatComponent.h"
#include "DataAssets/SKGPDAFirearmAttachmentStats.h"


USKGFirearmAttachmentStatComponent::USKGFirearmAttachmentStatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void USKGFirearmAttachmentStatComponent::BeginPlay()
{
	Super::BeginPlay();

}