# roadmap.md

## Umsetzungs-Fahrplan: "Book-Match"
Dieses Dokument beschreibt den agilen, meilensteinbasierten Entwicklungspfad vom No-Code-Prototypen bis zur skalierten App in den deutschen "Big Four" Großstädten.

---

## Phase 1: Der Core-Sprint (Monat 1)
Fokus: Aufbau des absolut minimal überlebensfähigen Produkts (MVP) in FlutterFlow.

* Infrastruktur und Setup:
    * Einrichten des FlutterFlow-Projekts und Verknüpfung mit der Firebase-Datenbank.
    * Erstellung des Datenmodells (User, Präferenzen, Books, Matches, Chats).
* Entwicklung der Core-Features:
    * Barcode-Scanner: Integration der Kamera-Funktion zur ISBN-Erkennung und Anbindung an die Google Books API für automatische Buch-Metadaten zur schnellen Befüllung des eigenen Regals.
    * Präferenzbasiertes Vorschlagssystem: Entwicklung einer einfachen Abfragelogik, die Nutzern Profile aus derselben Stadt anzeigt, priorisiert nach übereinstimmenden literarischen Interessen, Genres und Buchlisten.
    * Swipe-und-Kommentar-Logik: Visuelle Tinder-Karten mit dem Profilbild und der Bücherliste des vorgeschlagenen Nutzers sowie der Möglichkeit, beim Rechts-Swipe direkt das Wunschbuch zu kommentieren.
    * Echtzeit-Chat: Aktivierung des Firebase-Chats für gematchte Personen zur Absprache des Treffpunkts.
* Ziel am Ende von Monat 1: Eine funktionierende Alpha-Version auf den Testgeräten (iOS/Android via TestFlight/Google Play Console).

---

## Phase 2: Hyperlokaler Testlauf Berlin (Monat 2)
Fokus: Validierung der Kern-Mechanik unter realen Bedingungen.

* Soft-Launch: Veröffentlichung der App exklusiv für die Region Berlin.
* Nutzer-Akquise (Graswurzel): Gezieltes Einladen von Testnutzern über lokale Buch-Communitys, Facebook-Gruppen, Subreddits (r/berlin) und Freundeskreise.
* Feedback-Schleife:
    * Beobachten des Nutzerverhaltens: Werden die Regale gepflegt? Funktionieren die profilbasierten Vorschläge gut? Finden Chats statt und treffen sich die Personen?
    * Schnelles Beheben von kritischen Bugs direkt in FlutterFlow.

---

## Phase 3: Der Skalierungs-Meilenstein (Monat 3+)
Fokus: Erreichen der kritischen Masse und Vorbereitung auf die Expansion.

* Harte Meilensteine in Berlin vor der Expansion:
    1. 1.000 registrierte Nutzer in Berlin.
    2. Mindestens 200 erfolgreich bestätigte Buch-Matches.
* Produkt-Optimierung (während des Wartens auf die Meilensteine):
    * Verfeinerung des Empfehlungs-Algorithmus basierend auf dem echten Interaktionsverhalten der Nutzer.
    * Polieren des Designs und Verbesserung des Onboarding-Prozesses.

---

## Phase 4: Die "Big Four" Expansion und Monetarisierung (Zukunft)
Fokus: Rollout in ganz Deutschland mit Fokus auf Großstädte und Aktivierung von Umsatzkanälen.

* Städte-Rollout: Nach Erreichen der Berlin-Meilensteine wird die App für München, Hamburg und Köln freigeschaltet.
* Einführung von Premium (Freemium): Integration von In-App-Käufen für Power-Features (z.B. unbegrenztes Swipen, Profil-Push).
* Lokale B2B-Kooperationen: Ansprache von unabhängigen Cafés und Buchläden in den aktiven Städten, um diese als offizielle, sichere "Tausch-Zonen" visuell in der App zu verankern.
