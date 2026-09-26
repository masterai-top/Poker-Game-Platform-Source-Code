[简体中文](README.md) | [繁體中文](README.zh-TW.md) | **English**

# Telegram Poker Bot and H5 Web Game Platform Source Code

This project presents a multiplayer card-game platform for **Telegram groups and H5 Web**. Existing product material shows Telegram Bot interactions, a fast Dragon-Tiger Texas mode, hash-based result verification, balances and betting records, automated settlement, multi-group operations and an admin dashboard. The documented stack includes PHP, Telegram Bot API, MySQL and Redis.

> Important: the public repository contains only a small code snapshot and three README files, not every component described for the commercial product. Verify the complete PHP backend, Bot, database scripts, admin panel and deployment package against the actual licensed delivery list. This README does not claim that the public snapshot is immediately deployable.

## Real product screenshots

| Operations dashboard | Data dashboard |
|---|---|
| ![Telegram poker platform operations dashboard](docs/assets/screenshots/admin-dashboard.png) | ![TG poker game data dashboard](docs/assets/screenshots/admin-dashboard-2.png) |

| Telegram interaction | Betting screen | Result and hash view |
|---|---|---|
| ![Telegram poker game group interaction](docs/assets/screenshots/telegram-game-1.png) | ![Dragon Tiger Texas betting interface](docs/assets/screenshots/telegram-bet-1.png) | ![Game result and hash verification](docs/assets/screenshots/telegram-result-1.png) |

## Product capabilities

- **Telegram Bot integration:** product material shows group commands, betting interactions, balance queries and result notifications inside Telegram.
- **H5 Web access:** a mobile browser interface supports Telegram's in-app browser and ordinary Web entry points.
- **Dragon-Tiger Texas mode:** documented as a fast betting and frequent-result experience; exact cards, odds and settlement rules depend on the full configuration.
- **Hash result verification:** the described workflow helps users check published results; production use still requires an independent audit of randomness and seed disclosure.
- **Accounts and history:** balance inquiry, betting history, notifications, automated settlement and withdrawal-related flows are documented.
- **Multi-group operations:** the product targets management across multiple Telegram groups, with real dashboard screenshots.
- **Poker extensions:** the online description also mentions Texas Hold'em, tournaments, clubs and multiplayer tables, but the public snapshot is insufficient to verify all implementations.

## User flow

1. A player opens the Bot or H5 page from a Telegram group.
2. The player checks the mode, balance and current round state.
3. An action is submitted through a Bot command or H5 control.
4. The platform publishes the result and updates the player's history.
5. The player reviews records and hash verification information, subject to the full platform configuration and local law.

## Technology and visible source

| Layer | Product documentation | Verifiable public files |
|---|---|---|
| Web/service | PHP and H5 Web | Composer autoload files plus Laravel-style `CreatesApplication.php` and `TestCase.php` |
| Bot | Telegram Bot API | Product description; the complete Bot directory is not visible in this snapshot |
| Data | MySQL and Redis | Documented stack; database scripts require verification in the licensed package |
| Game logic | Multiplayer flow, Dragon-Tiger Texas, result verification | Visible samples such as `context.h` and `user.cpp` |
| Operations | Multi-group records and admin dashboard | Real screenshots; complete admin source requires separate verification |

The Composer files indicate PHP autoloading, while the Laravel-style files expose an application test entry. Before evaluation or deployment, request a complete tree, dependency versions, migrations, environment examples, Bot setup, deployment instructions and security documentation.

## Illustrated topic pages

- [Telegram poker source code](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/en/telegram-poker-source-code.html)
- [H5 Web poker and Dragon-Tiger Texas](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/en/h5-web-poker-platform.html)
- [Simplified Chinese Telegram poker page](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/telegram-poker-source-code.html)
- [Simplified Chinese Dragon-Tiger Texas page](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/dragon-tiger-texas.html)

## Clone and evaluate

```bash
git clone https://github.com/masterai-top/Poker-Game-Platform-Source-Code.git
cd Poker-Game-Platform-Source-Code
```

Cloning provides the public snapshot only. Before use, verify the delivery list, installation guide, dependencies, database, Bot permissions, hash verification, admin roles, audit logs, security controls and legal operating scope.

## Compliance and security

Software involving bets, funds or withdrawals may be regulated by gaming, payment, AML, age, privacy and consumer-protection law. Obtain appropriate legal advice and licenses, and audit accounts, keys, randomness, payments, logs, permissions and data protection before deployment. Illegal use is prohibited.

Contact: Telegram `@xuzongbin001` · Email `masterai918@gmail.com` · [GitHub Issues](https://github.com/masterai-top/Poker-Game-Platform-Source-Code/issues)
