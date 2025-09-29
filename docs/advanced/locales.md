# Locales

OverKeys supports locale-specific key representations to accommodate different keyboard layouts and languages. This feature allows OverKeys to recognize the "foreign" keys on your keyboard and display/react to them correctly.

## Setup Instructions

1. Right-click the OverKeys tray icon
2. Select **Preferences**
3. Go to the **Advanced** tab
4. Toggle the **Turn on advanced settings** option
5. Click the **Open Config** button
6. In the JSON file, add or modify the `customKeys` field to match your keyboard

   ```jsonc
       // GERMAN QWERTZ
       "customKeys": {
               "keyCodeMap": {
                   "Ü": 186,
                   "+": 187,
                   "#": 191,
                   "Ö": 192,
                   "ß": 219,
                   "^": 220,
                   "´": 221,
                   "Ä": 222,
                   "<": 226
               },
               "keyCodeShiftMap": {
                   "=": 48,
                   "!": 49,
                   "\"": 50,
                   "§": 51,
                   "$": 52,
                   "%": 53,
                   "&": 54,
                   "/": 55,
                   "(": 56,
                   ")": 57,
                   "\*": 187,
                   ";": 188,
                   ":": 190,
                   "'": 191,
                   "?": 219,
                   "°": 220,
                   "`": 221,
                   ">": 226
               }
       }
       //,
       //"defaultUserLayout": "QWERTZ",
       //"userLayouts": [
       //    {
       //        "name": "QWERTZ",
       //        "keys": [
       //            ["^", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "ß", "´", "BSPC", "DEL"],
       //            ["TAB", "Q", "W", "E", "R", "T", "Z", "U", "I", "O", "P", "Ü", "+", "PGUP", "PGDN"],
       //            ["A", "S", "D", "F", "G", "H", "J", "K", "L", "Ö", "Ä", "#", "ENTER", "HOME"],
       //            ["LSFT", "<", "Y", "X", "C", "V", "B", "N", "M", ",", ".", "-", "↑", "RSFT"],
       //            ["END", "LCTRL", "LALT", " ", "RALT", "RCTRL", "←", "↓", "→"]
       //        ]
       //    }
       //]
   ```

7. Save the file
8. Right-click the tray icon and click **Reload config** to apply changes

## Creating Custom Locales

You can create custom locales by defining the `customKeys` object in your configuration file. This object should include two mappings: `keyCodeMap` for regular keys and `keyCodeShiftMap` for shifted keys.

```jsonc
"customKeys": {
    "keyCodeMap": {
        "key": keyCode,
        "another-key": anotherKeyCode
    },
    "keyCodeShiftMap": {
        "shifted-symobl": keyCodeOfOriginalNonShiftedKey,
        "another-shifted-symbol": anotherKeyCodeOfOriginalNonShiftedKey
    }
}
```

`keyCodeMap` is mainly for keys that produce different characters without the Shift key, while `keyCodeShiftMap` is for keys that produce different characters when the Shift key is held down.  

## Implementation Notes

As of the moment, to support other locales, a user can:

1. Learn and define the key codes that the foreign keys use by building locally and inferring from the app's debug statements.
2. Create a feature request to ask for help in defining these key codes, given that they state the keyboard they are using in Windows (e.g., US QWERTY, German QWERTZ).
3. Create a discussion to ask for help from the community.

`keyCodeShiftMap` is almost the same as `customShiftMappings` field, except the latter just visually changes the keys, while the former logically maps the shift symbol of the original key to the new one. As such, there is no need for duplication of entries between the two fields.
