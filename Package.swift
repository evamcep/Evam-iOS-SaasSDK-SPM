// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "EvamiOSCommonKit",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "EvamiOSCommonKit",
            targets: ["EvamiOSCommonKit"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "EvamiOSCommonKit",
            path: "Sources/EvamiOSCommonKit/EvamiOSCommonKit.xcframework"
        )
    ]
)
