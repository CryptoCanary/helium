// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2018 The PIVX developers
// Copyright (c) 2018 The Helium developers
// Copyright (c) 2014-2019 The Sterlingcoin developers

// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_GUICONSTANTS_H
#define BITCOIN_QT_GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 1000;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* Bitcoin GUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;

/* Invalid field background style */
#define STYLE_INVALID "background:#FF8080"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(138, 138, 138)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(167, 119, 119)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(178, 178, 178)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(102, 102, 150)
/* Transaction list -- TX status decoration - offline */
#define COLOR_TX_STATUS_OFFLINE QColor(192, 192, 192)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(90, 104, 118)
/* Transaction list -- TX status decoration - conflicted */
#define COLOR_CONFLICTED QColor(255, 0, 0)
/* Transaction list -- TX status decoration - orphan (Light) */
#define COLOR_ORPHAN QColor(178, 178, 178)
/* Transaction list -- TX status decoration - stake (Darker) */
#define COLOR_STAKE QColor(138,138,138)

/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define EXPORT_IMAGE_SIZE 256

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 36

#define QAPP_ORG_NAME "Sterlingcoin"
#define QAPP_ORG_DOMAIN "Sterlingcoin.org"
#define QAPP_APP_NAME_DEFAULT "Sterlingcoin-Qt"
#define QAPP_APP_NAME_TESTNET "Sterlingcoin-Qt-testnet"

#endif // BITCOIN_QT_GUICONSTANTS_H
