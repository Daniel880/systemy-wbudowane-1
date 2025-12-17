## Instrukcja pracy z repozytorium

### 1. Sklonuj repozytorium z kluczem i skonfiguruj SSH
```bash
git clone https://github.com/Daniel880/systemy-wbudowane-key.git   # pobranie repo z kluczem
cd systemy-wbudowane-key                                            # wejście do katalogu

chmod 600 systemy-wbudowane-1                                       # ustawienie praw do klucza
eval "$(ssh-agent -s)"                                              # uruchomienie ssh-agenta
ssh-add systemy-wbudowane-1                                         # dodanie klucza do agenta
```

Sprawdzenie połączenia:
```bash
ssh -T git@github.com                                               # test połączenia SSH z GitHubem
```

---

### 2. Skonfiguruj dane użytkownika
Wstaw swoje dane:

```bash
git config --global user.name "Imie Nazwisko"                       # ustawienie nazwy użytkownika
git config --global user.email "imie@nazwisko.com"                  # ustawienie adresu email
```

---

### 3. Sklonuj główne repozytorium
```bash
cd ..                                                               # wyjście poziom wyżej
git clone git@github.com:Daniel880/systemy-wbudowane-1.git          # klon repo projektu przez SSH
cd systemy-wbudowane-1                                              # wejście do projektu
```

---

### 4. Utwórz własną gałąź
Zamień `imie-nazwisko` na swoje dane:

```bash
git checkout -b imie-nazwisko                                       # tworzy nową gałąź i przełącza na nią
git push --set-upstream origin imie-nazwisko                        # wysyła gałąź na GitHuba i ustawia tracking
```

---

### 5. Utwórz plik `main.cpp`
Zawartość:

```cpp
int main() {
    return 0;
}
```

Dodanie i wysłanie pliku:

```bash
git add main.cpp                                                    # dodanie pliku do commita
git commit -m "Dodano pusta funkcje main"                           # zapis zmian w repo lokalnym
git push                                                            # wysłanie zmian do GitHuba
```

---

### 6. Zmodyfikuj `main.cpp` – wypisz „Hello world”
Zawartość:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello world" << std::endl;
    return 0;
}
```

Dodanie i wysłanie zmian:

```bash
git add main.cpp                                                    # dodanie edytowanego pliku
git commit -m "Dodano wypisywanie Hello world"                      # commit z opisem zmian
git push                                                            # wysłanie zmian do repozytorium
```

---

### 7. Przydatne komendy
```bash
git status                                                          # pokazuje zmodyfikowane pliki
git diff                                                            # pokazuje różnice w kodzie
git log --oneline                                                   # skrócona historia commitów
git branch                                                          # lista gałęzi lokalnych
git pull                                                            # pobiera zmiany z gałęzi, na której jesteś
```
