# Systemy Wbudowane - Projekt Przykładowy

## Instrukcja pracy z repozytorium

### 1. Sklonuj repozytorium z kluczem i skonfiguruj SSH

```bash
git clone https://github.com/Daniel880/systemy-wbudowane-key.git   # pobranie repo z kluczem
cd systemy-wbudowane-key                                            # wejście do katalogu

chmod 600 systemy-wbudowane-1                                       # ustawienie praw do klucza
eval "$(ssh-agent -s)"                                              # uruchomienie ssh-agenta
ssh-add systemy-wbudowane-1                                         # dodanie klucza do agenta
```

### 2. Skonfiguruj dane użytkownika

Wstaw swoje dane:

```bash
git config --global user.name "Imie Nazwisko"                       # ustawienie nazwy użytkownika
git config --global user.email "imie@nazwisko.com"                  # ustawienie adresu email
```

### 3. Sklonuj główne repozytorium

```bash
cd ..                                                               # wyjście poziom wyżej
git clone git@github.com:Daniel880/systemy-wbudowane-1.git          # klon repo projektu przez SSH
cd systemy-wbudowane-1                                              # wejście do projektu
```

---

## Struktura Projektu

```
.
├── CMakeLists.txt          # Plik konfiguracyjny CMake
├── include/
│   └── command.h           # Bazowa klasa Command i system rejestracji
├── src/
│   ├── main.cpp            # Główny program - tutaj rejestrujesz komendy
│   └── command.cpp         # Implementacja rejestru komend
├── commands/
│   ├── JanKowalski_command.cpp   # Komenda dla studenta Jan Kowalski
│   ├── AnnaNowak_command.cpp     # Komenda dla studenta Anna Nowak
│   └── ...                       # Dodaj więcej plików *_command.cpp
└── README.md
```

## Praca z Git - Tworzenie własnego brancha

### Krok 1: Utwórz własny branch

Przed rozpoczęciem pracy **ZAWSZE** twórz własny branch z nazwą dodawanej komendy (na początku niech to będzie Twoje imię i nazwisko):

```bash
git checkout -b ImieNazwisko
```

Przykład:

```bash
git checkout -b JanKowalski
```

### Krok 2: Wypchnij branch na serwer

```bash
git push -u origin ImieNazwisko
```

### Krok 3: Aktualizacja swojego brancha z main

Przed rozpoczęciem nowej pracy lub gdy main został zaktualizowany, pobierz zmiany:

```bash
# Przełącz się na main
git checkout main

# Pobierz najnowsze zmiany
git pull origin main

# Wróć do swojego brancha
git checkout ImieNazwisko

# Zmerge zmiany z main do swojego brancha
git merge main
```

Jeśli wystąpią konflikty, rozwiąż je i:

```bash
git add .
git commit -m "Merge main into ImieNazwisko"
```

### Krok 4: Praca nad projektem

Podczas pracy nad projektem możesz commitować zmiany wielokrotnie:

```bash
git add <nazwa-pliku>                                               # dodanie konkretnego pliku
git commit -m "Opis zmian"                                          # commit z opisem zmian
git push                                                            # wysłanie zmian do repozytorium
```

Lub dodaj wszystkie zmienione pliki naraz:

```bash
git add .                                                           # dodanie wszystkich zmienionych plików
git commit -m "Opis zmian"                                          # commit z opisem zmian
git push                                                            # wysłanie zmian do repozytorium
```

Przykład:

```bash
git add commands/JanKowalski_command.cpp                            # dodanie edytowanego pliku
git commit -m "Dodano rysunek domu w komendzie JanKowalski"         # commit z opisem zmian
git push                                                            # wysłanie zmian do repozytorium
```

### Przydatne komendy Git

Wyświetl graficzną historię commitów:

```bash
git log --all --decorate --oneline --graph                          # wizualizacja historii wszystkich branchy
```

## Kompilacja i Uruchomienie

### Wymagania

- CMake (wersja 3.10 lub wyższa)
- Kompilator C++ ze wsparciem C++17 (g++, clang++, etc.)

### Instrukcje Kompilacji

1. Utwórz katalog build:

```bash
mkdir build
cd build
```

2. Wygeneruj pliki build za pomocą CMake:

```bash
cmake ..
```

3. Skompiluj projekt:

```bash
make
```

### Użycie

Po zbudowaniu, uruchom program z nazwą komendy:

```bash
./sw JanKowalski
```

lub

```bash
./sw AnnaNowak
```

Program automatycznie wyświetla wszystkie dostępne komendy gdy uruchomisz go bez parametrów:

```bash
./sw
```

### Przykładowe Wyjście

```bash
$ ./sw JanKowalski
=== Jan Kowalski Command ===
Rysunek Jana Kowalskiego:
       *
      ***
     *****
    *******
   *********
  ***********
 *************
    |     |
    |  _  |
    | |_| |
    |_____|

=============================

$ ./sw AnnaNowak
=== Anna Nowak Command ===
Executing function for Anna Nowak
Student ID: 67890
============================
```

## Jak Dodać Nową Komendę?

### Krok 1: Utwórz nowy plik w folderze commands/

Skopiuj szablon i dostosuj go:

```bash
cd commands
cp JanKowalski_command.cpp PiotrWisniewski_command.cpp
```

### Krok 2: Edytuj nowy plik

```cpp
#include "command.h"
#include <iostream>

// Command for PiotrWisniewski
class PiotrWisniewskiCommand : public Command {
public:
  void execute() override {
    std::cout << "=== Piotr Wisniewski Command ===" << std::endl;
    // Tutaj umieść swoją logikę
    std::cout << "Wykonuję operację dla Piotr Wisniewski" << std::endl;
    std::cout << "Student ID: 11111" << std::endl;
    std::cout << "=================================" << std::endl;
  }
  
  std::string getDescription() const override {
    return "Opis komendy dla studenta Piotr Wisniewski";
  }
};

// Global instance - will be registered in main.cpp
PiotrWisniewskiCommand piotrWisniewskiCommand;
```

### Krok 3: Dodaj plik do CMakeLists.txt

Otwórz `CMakeLists.txt` i dodaj nowy plik do listy `COMMAND_SOURCES`:

```cmake
set(COMMAND_SOURCES
    commands/JanKowalski_command.cpp
    commands/AnnaNowak_command.cpp
    commands/PiotrWisniewski_command.cpp  # Dodaj tę linię
    # Add more command files here for new students
)
```

### Krok 4: Zarejestruj komendę w main.cpp

Otwórz `src/main.cpp` i dodaj:

```cpp
// Na górze pliku, dodaj deklarację:
extern Command piotrWisniewskiCommand;

// W funkcji main(), dodaj rejestrację:
registry.registerCommand("PiotrWisniewski", &piotrWisniewskiCommand);
```

### Krok 5: Przebuduj projekt

```bash
cd build
cmake ..
make
```

### Krok 6: Testuj nową komendę

```bash
./sw PiotrWisniewski
```
