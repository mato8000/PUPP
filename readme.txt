Program Using PhysX for Practice (PUPP)
====

## PhysX 導入手順

1. Nvidia Game Worksに登録する
2. リポジトリのアクセス権を申請する
3. C:/ とかで git clone
4. C:/PhysX-3.4/PhysX_3.4/Documentation/PhysXGuide どおりに進めよう！


## Tips

VS2017ではコンパイラのバグによりビルドができないので，2015の使用を推奨  
VS2017 15.5以降ではコンパイラのバグ修正により，ビルド可能？  
https://developercommunity.visualstudio.com/content/problem/66047/possible-compiler-bug.html

プロファイルが4つあるが，通常の開発にはcheckedビルドの使用が推奨されている  
debugはdebugビルド，releaseはcheckedかreleaseビルドを使用すればいいと思う  
PhysX Visual Debugger (PVD) も使える  

コード生成/ランタイムライブラリについて  
デフォルトではDXTKは/MD，physxは/MT，となっており，両者を混在させることはできない  
今回はDXTKを/MTでビルドし直すことで解決した  
http://www.fujimi-labo.com/2017/04/04/3dpg1/  
https://www44.atwiki.jp/bokuyo/pages/45.html  

SceneにRigidActorを登録し，Simulateする  
RigidActorは複数のshapeを持つことができる  

多くのクラスはprotectedなデストラクタを持つため，スマートポインタを使用できない  
materialやshapeは内部的に参照カウントを持つらしい  



NVIDIA GameWorks™ Technology provided under license from NVIDIA Corporation. Copyright © 2002-2015 NVIDIA Corporation. All rights reserved.