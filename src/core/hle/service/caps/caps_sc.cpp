// SPDX-FileCopyrightText: Copyright 2020 sudachi Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "core/hle/service/caps/caps_sc.h"

namespace Service::Capture {

IScreenShotControlService::IScreenShotControlService(Core::System& system_)
    : ServiceFramework{system_, "caps:sc"} {
    // clang-format off
    static const FunctionInfo functions[] = {
        {1, nullptr, "CaptureRawImage"},
        {2, nullptr, "CaptureRawImageWithTimeout"},
        {3, nullptr, "AttachSharedBuffer"},
        {5, nullptr, "CaptureRawImageToAttachedSharedBuffer"},
        {210, nullptr, "Unknown210"},
        {1001, nullptr, "RequestTakingScreenShot"},
        {1002, nullptr, "RequestTakingScreenShotWithTimeout"},
        {1003, nullptr, "RequestTakingScreenShotEx"},
        {1004, nullptr, "RequestTakingScreenShotEx1"},
        {1009, nullptr, "CancelTakingScreenShot"},
        {1010, nullptr, "SetTakingScreenShotCancelState"},
        {1011, nullptr, "NotifyTakingScreenShotRefused"},
        {1012, nullptr, "NotifyTakingScreenShotFailed"},
        {1100, nullptr, "Unknown1100"}, // 18.0.0+
        {1101, nullptr, "SetupOverlayMovieThumbnail"},
        {1106, nullptr, "Unknown1106"},
        {1107, nullptr, "Unknown1107"},
        {1108, nullptr, "Unknown1108"}, // 18.0.0+
        {1201, nullptr, "OpenRawScreenShotReadStream"},
        {1202, nullptr, "CloseRawScreenShotReadStream"},
        {1203, nullptr, "ReadRawScreenShotReadStream"},
        {1204, nullptr, "Unknown1204"},
    };
    // clang-format on

    RegisterHandlers(functions);
}

IScreenShotControlService::~IScreenShotControlService() = default;

} // namespace Service::Capture
