#include "MainMenuUI.h"

void UMainMenuUI::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Room1");
}

void UMainMenuUI::NativeConstruct()
{
	Super::NativeConstruct();
    startGameButton->OnClicked.AddDynamic(this, &UMainMenuUI::StartGame);
}


