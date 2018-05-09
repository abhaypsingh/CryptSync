// CryptSync - A folder sync tool with encryption

// Copyright (C) 2018 - Stefan Kueng

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//

// This file is based on the following file from the LZMA SDK (http://www.7-zip.org/sdk.html):
//   ./CPP/7zip/Guid.txt
#pragma once


namespace SevenZip
{
    // Handler GUIDs

    // {23170F69 - 40C1 - 278A - 1000 - 000110xx0000}

    DEFINE_GUID(CLSID_CFormatZip,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x01, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatBZip2,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x02, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatRar,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x03, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatArj,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x04, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatZ,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x05, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatLzh,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x06, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormat7z,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x07, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatCab,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x08, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatNsis,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x09, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatLzma,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x0A, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatLzma86,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x0B, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatXz,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x0C, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatPpmd,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0x0D, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatRar5,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xCC, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatFlv,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xD6, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatSwf,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xD7, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatSwfc,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xD8, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatIso,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xE7, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatChm,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xE9, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatTar,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xEE, 0x00, 0x00);

    DEFINE_GUID(CLSID_CFormatGZip,
        0x23170F69, 0x40C1, 0x278A, 0x10, 0x00, 0x00, 0x01, 0x10, 0xEF, 0x00, 0x00);
}
