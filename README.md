[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# Telegram 德州与 H5 Web 扑克游戏平台源码

这是一个面向 **Telegram 群组与 H5 Web** 场景的多人扑克交互平台项目。现有产品资料展示 TG Bot 群内交互、龙虎德州快节奏玩法、Hash 结果验证、余额和投注记录、自动派彩、多群组支持与运营后台；技术说明涉及 PHP、Telegram Bot API、MySQL 和 Redis。

> 重要：当前公开仓库只包含少量代码文件与三语说明，并不是 README 所描述完整商业系统的全部交付物。完整 PHP 后端、Bot、数据库脚本、后台和部署资料是否提供，应以实际授权与交付清单为准。本 README 不再提供无法由当前目录验证的启动命令。

## 真实产品截图

| 运营后台 | 后台数据页面 |
|---|---|
| ![Telegram 德州扑克平台运营后台](docs/assets/screenshots/admin-dashboard.png) | ![TG 德州游戏平台数据后台](docs/assets/screenshots/admin-dashboard-2.png) |

| Telegram 群内交互 | 投注界面 | 开奖结果 |
|---|---|---|
| ![Telegram 德州群内游戏界面](docs/assets/screenshots/telegram-game-1.png) | ![TG 龙虎德州投注界面](docs/assets/screenshots/telegram-bet-1.png) | ![龙虎德州开奖结果与Hash验证](docs/assets/screenshots/telegram-result-1.png) |

## 产品功能

- **Telegram Bot 集成**：产品资料展示在 Telegram 群内完成指令交互、投注、查询和结果通知，减少跳转步骤。
- **H5 Web 入口**：适配手机浏览器访问，为 Telegram 内置浏览器或普通 Web 场景提供页面入口。
- **龙虎德州玩法**：README 明确说明快节奏投注与持续开奖；具体牌型、赔率和结算规则应以完整产品配置为准。
- **Hash 结果验证**：产品资料描述以 Hash 机制辅助核对开奖结果；上线前仍需独立审计随机源、种子披露与验证流程。
- **账户与记录**：包括余额查询、投注记录、结果通知、自动派彩和提现相关产品流程。
- **多群组与后台**：面向多个 Telegram 群的管理场景，截图展示运营后台与数据视图。
- **多人扑克扩展**：线上说明还列出 Texas Hold'em、赛事、俱乐部和多人桌方向，但当前公开代码不足以验证完整实现。

## 玩家使用流程

1. 玩家在 Telegram 群中打开 Bot 或 H5 页面。
2. 查看玩法、余额及当期状态，选择龙虎德州等入口。
3. 通过 Bot 指令或 H5 界面提交操作。
4. 系统生成结果并在群组或页面中通知，同时写入记录。
5. 玩家可查询投注历史与 Hash 验证信息；具体资金流程需按当地法律与完整系统配置执行。

## 技术架构与当前代码

| 层级 | 产品资料描述 | 当前仓库可验证内容 |
|---|---|---|
| Web/服务层 | PHP、H5 Web | Composer 自动加载文件、Laravel 风格 `CreatesApplication.php` 与 `TestCase.php` |
| Bot | Telegram Bot API | README 产品说明；完整 Bot 目录未在当前公开快照中出现 |
| 数据层 | MySQL、Redis | README 技术说明；数据库脚本需以完整交付物为准 |
| 游戏逻辑 | 多人交互、龙虎德州、结果验证 | `context.h`、`user.cpp` 等可见代码样本 |
| 运营层 | 多群管理、记录、后台 | 真实产品截图；完整后台代码需另行核对 |

当前目录中的 `autoload_namespaces.php`、`autoload_psr4.php`、`autoload_real.php` 表明项目使用 Composer 自动加载结构；`CreatesApplication.php` 与 `TestCase.php` 显示 PHP 应用测试入口；`context.h` 和 `user.cpp` 是公开的代码样本。评估或部署前应索取完整目录结构、依赖版本、数据库迁移、环境变量示例和部署文档。

## 图文专题

- [Telegram 德州源码与 TG Bot 产品流程](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/telegram-poker-source-code.html)
- [H5 德州与 Web 扑克平台](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/h5-web-poker.html)
- [龙虎德州玩法与 Hash 验证](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/dragon-tiger-texas.html)
- [Telegram Poker Bot 技术结构](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/zh-cn/telegram-poker-bot.html)
- [English product overview](https://masterai-top.github.io/Poker-Game-Platform-Source-Code/en/telegram-poker-source-code.html)

## 获取与评估

```bash
git clone https://github.com/masterai-top/Poker-Game-Platform-Source-Code.git
cd Poker-Game-Platform-Source-Code
```

克隆命令只用于查看当前公开文件，不代表已经获得完整可运行平台。评估时建议依次核对：交付清单、安装文档、依赖与数据库、Bot 权限、Hash 验证方法、后台权限、日志审计、安全策略和合法运营范围。

## 合规与安全

涉及投注、资金、提现或类似功能的软件可能受到当地游戏、支付、反洗钱、年龄限制、隐私和消费者保护法规约束。部署前必须取得适当法律意见和许可，并完成账户、密钥、随机性、支付、日志、权限和数据保护审计。严禁用于违法活动。

联系：Telegram `@xuzongbin001` · Email `masterai918@gmail.com` · [GitHub Issues](https://github.com/masterai-top/Poker-Game-Platform-Source-Code/issues)
