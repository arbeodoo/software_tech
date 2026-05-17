# techstack.md

## Architektur-Strategie: Lean Evolution
Um Risiko und Time-to-Market zu minimieren, folgt der Tech-Stack einer Zwei-Phasen-Strategie: Erst schnelle Validierung via No-Code, dann Skalierung via Cross-Platform-Code.

---

## Phase 1: MVP und Validierung (No-Code / Low-Code)
Das Ziel: Schnellstmöglicher Launch in den Big Four (Start in Berlin) mit minimalem Entwicklungsaufwand.

* Frontend / App-Builder: FlutterFlow
    * Warum: Ermöglicht visuelles Bauen von iOS und Android Apps, generiert aber im Hintergrund sauberen Flutter/Dart-Code. Perfekt für den späteren Übergang.
* Backend und Datenbank: Firebase (Google)
    * Firestore: Dokumentenbasierte NoSQL-Datenbank für Nutzerprofile, Bücherlisten, Präferenzen und Chats.
    * Firebase Authentication: Für den Login (E-Mail/Passwort, optional Apple/Google Sign-In).
    * Cloud Storage: Sicheres Speichern von Profilbildern und hochgeladenen Buchcovern.
* Core-Funktionen und Integrationen:
    * Kamera-Schnittstelle: Für den integrierten Barcode-/ISBN-Scanner in FlutterFlow.
    * Firebase Cloud Messaging: Für Push-Benachrichtigungen bei neuen Matches oder Chat-Nachrichten.
    * Matching-Logik (MVP): Filterung und Sortierung der vorgeschlagenen Profile in Firebase basierend auf der Stadt und einer einfachen Gewichtung übereinstimmender Genres oder Buchlisten-Präferenzen.

---

## Phase 2: Skalierung und Custom Code (Cross-Platform)
Das Ziel: Migration zu vollwertigem Code, sobald das Konzept validiert ist und die User-Zahlen steigen.

* Framework: Flutter (Dart)
    * Warum: Wir exportieren den Code aus FlutterFlow und entwickeln ihn nativ in einer Entwicklungsumgebung weiter. Eine Codebasis bedient weiterhin iOS und Android.
* Backend: Beibehalten von Firebase, optionaler Ausbau von komplexen, algorithmischen Profil-Empfehlungen über Firebase Cloud Functions (Node.js).

---

## Externe APIs und Services (Gültig für Phase 1 und 2)

* Bücher-Datenbanken (Buch-Metadaten):
    * Google Books API und Open Library API (Kombiniert): Kostenfreie Abfrage von Buchtiteln, Autoren, Beschreibungen und Cover-Bildern anhand der gescannten ISBN oder via Texteingabe beim Erstellen des eigenen Regals.
* Geolokalisierung:
    * Geocoding / Geolocator Plugin: Ermittlung der Stadt beim Onboarding, um Profile lokal nach Relevanz zu filtern, ohne den exakten GPS-Standort der Nutzer preiszugeben (Privacy-by-Design).
