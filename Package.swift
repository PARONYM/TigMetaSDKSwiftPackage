// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "TigMetaSDK",
    products: [
        .library(
            name: "TigMetaSDK",
            targets: ["TigMetaSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "TigMetaSDK",
            path: "TigMetaSDK.xcframework"
        ),
        .target(
            name: "TigMetaSDKSwiftPackage",
            dependencies: [
                "TigMetaSDK",
            ]
        ),
    ]
)
