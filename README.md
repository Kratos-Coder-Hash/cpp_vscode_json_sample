# cpp_vscode_json_sample

适用于vscode结合WSL ubuntu适用
遇到的问题
1.找不到对应的头文件，可以选择指定版本
`cd /usr/include/ && wget https://github.com/nlohmann/json/releases/download/v3.10.5/json.hpp`

2.注意.vscode下面文件夹的配置

c_cpp_properties.json，注意 "includePath"配置

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/include/**",
                "/usr/lib/x86_64-linux-gnu/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```

