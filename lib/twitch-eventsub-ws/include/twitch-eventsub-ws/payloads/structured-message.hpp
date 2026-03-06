// SPDX-FileCopyrightText: 2024 Contributors to Chatterino <https://chatterino.com>
//
// SPDX-License-Identifier: MIT

#pragma once

#include "twitch-eventsub-ws/string.hpp"

#include <string_view>
#include <variant>
#include <vector>

namespace chatterino::eventsub::lib::chat {

struct Cheermote {
    static constexpr std::string_view TAG = "cheermote";

    String prefix;
    int bits;
    int tier;
};

struct Emote {
    static constexpr std::string_view TAG = "emote";

    String id;
    String emoteSetID;
};

struct Mention {
    static constexpr std::string_view TAG = "mention";

    String userID;
    String userName;
    String userLogin;
};

struct Text {
    static constexpr std::string_view TAG = "text";
};

struct MessageFragment {
    String text;
    /// json_tag=type
    std::variant<Text, Cheermote, Emote, Mention> inner;
};

struct Message {
    String messageId; // <--- ADD THIS LINE
    String text;
    std::vector<MessageFragment> fragments;
};

} // namespace chatterino::eventsub::lib::chat

// This include is critical for the code generator!
#include "twitch-eventsub-ws/payloads/structured-message.inc"
