include(FetchContent)

FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.0.0
)
FetchContent_Declare(
        CSFML
        GIT_REPOSITORY https://github.com/CesarBerriot/CSFML.git
        GIT_TAG master
)
FetchContent_MakeAvailable(SFML CSFML)